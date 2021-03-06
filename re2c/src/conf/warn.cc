#include <stddef.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <string>
#include <utility>

#include "src/conf/msg.h"
#include "src/conf/warn.h"
#include "src/ir/rule_rank.h"

namespace re2c {

Warn warn;

const uint32_t Warn::SILENT  = 0;
const uint32_t Warn::WARNING = 1u << 0;
const uint32_t Warn::ERROR   = 1u << 1;

const char * Warn::names [TYPES] =
{
#define W(x, y) y
	RE2C_WARNING_TYPES
#undef W
};

Warn::Warn ()
	: mask ()
	, error_accuml (false)
{
	for (uint32_t i = 0; i < TYPES; ++i)
	{
		mask[i] = SILENT;
	}
}

bool Warn::error () const
{
	return error_accuml;
}

void Warn::set (type_t t, option_t o)
{
	switch (o)
	{
		case W:
			mask[t] |= WARNING;
			break;
		case WNO:
			mask[t] &= ~WARNING;
			break;
		case WERROR:
			// unlike -Werror, -Werror-<warning> implies -W<warning>
			mask[t] |= (WARNING | ERROR);
			break;
		case WNOERROR:
			mask[t] &= ~ERROR;
			break;
	}
}

void Warn::set_all ()
{
	for (uint32_t i = 0; i < TYPES; ++i)
	{
		mask[i] |= WARNING;
	}
}

// -Werror doesn't set any warnings: it only guarantees that if a warning
// has been set by now or will be set later then it will result into error.
void Warn::set_all_error ()
{
	for (uint32_t i = 0; i < TYPES; ++i)
	{
		mask[i] |= ERROR;
	}
}

void Warn::fail (type_t t, uint32_t line, const char * s)
{
	if (mask[t] & WARNING)
	{
		// -Werror has no effect
		warning (names[t], line, false, "%s", s);
	}
}

void Warn::condition_order (uint32_t line)
{
	if (mask[CONDITION_ORDER] & WARNING)
	{
		const bool e = mask[CONDITION_ORDER] & ERROR;
		error_accuml |= e;
		warning (names[CONDITION_ORDER], line, e,
			"looks like you use hardcoded numbers instead of autogenerated condition names: "
			"better add '/*!types:re2c*/' directive or '-t, --type-header' option "
			"and don't rely on fixed condition order.");
	}
}

void Warn::empty_class (uint32_t line)
{
	if (mask[EMPTY_CHARACTER_CLASS] & WARNING)
	{
		const bool e = mask[EMPTY_CHARACTER_CLASS] & ERROR;
		error_accuml |= e;
		warning (names[EMPTY_CHARACTER_CLASS], line, e, "empty character class");
	}
}

void Warn::match_empty_string (uint32_t line)
{
	if (mask[MATCH_EMPTY_STRING] & WARNING)
	{
		const bool e = mask[MATCH_EMPTY_STRING] & ERROR;
		error_accuml |= e;
		warning (names[MATCH_EMPTY_STRING], line, e, "rule matches empty string");
	}
}

void Warn::swapped_range (uint32_t line, uint32_t l, uint32_t u)
{
	if (mask[SWAPPED_RANGE] & WARNING)
	{
		const bool e = mask[SWAPPED_RANGE] & ERROR;
		error_accuml |= e;
		warning (names[SWAPPED_RANGE], line, e, "range lower bound (0x%X) is greater than upper bound (0x%X), swapping", l, u);
	}
}

void Warn::undefined_control_flow (uint32_t line, const std::string & cond, std::vector<way_t> & ways, bool overflow)
{
	if (mask[UNDEFINED_CONTROL_FLOW] & WARNING)
	{
		const bool e = mask[UNDEFINED_CONTROL_FLOW] & ERROR;
		error_accuml |= e;

		// report shorter patterns first
		std::sort (ways.begin (), ways.end (), cmp_ways);

		warning_start (line, e);
		fprintf (stderr, "control flow %sis undefined for strings that match ", incond (cond).c_str ());
		const size_t count = ways.size ();
		if (count == 1)
		{
			fprint_way (stderr, ways[0]);
		}
		else
		{
			for (size_t i = 0; i < count; ++i)
			{
				fprintf (stderr, "\n\t");
				fprint_way (stderr, ways[i]);
			}
			fprintf (stderr, "\n");
		}
		if (overflow)
		{
			fprintf (stderr, " ... and a few more");
		}
		fprintf (stderr, ", use default rule '*'");
		warning_end (names[UNDEFINED_CONTROL_FLOW], e);
	}
}

void Warn::unreachable_rule (const std::string & cond, const rule_info_t & rule, const rules_t & rules)
{
	if (mask[UNREACHABLE_RULES] & WARNING)
	{
		const bool e = mask[UNREACHABLE_RULES] & ERROR;
		error_accuml |= e;
		warning_start (rule.line, e);
		fprintf (stderr, "unreachable rule %s", incond (cond).c_str ());
		const size_t shadows = rule.shadow.size ();
		if (shadows > 0)
		{
			const char * pl = shadows > 1
				? "s"
				: "";
			std::set<rule_rank_t>::const_iterator i = rule.shadow.begin ();
			fprintf (stderr, "(shadowed by rule%s at line%s %u", pl, pl, rules.find (*i)->second.line);
			for (++i; i != rule.shadow.end (); ++i)
			{
				fprintf (stderr, ", %u", rules.find (*i)->second.line);
			}
			fprintf (stderr, ")");
		}
		warning_end (names[UNREACHABLE_RULES], e);
	}
}

void Warn::useless_escape (uint32_t line, uint32_t col, char c)
{
	if (mask[USELESS_ESCAPE] & WARNING)
	{
		const bool e = mask[USELESS_ESCAPE] & ERROR;
		error_accuml |= e;
		warning (names[USELESS_ESCAPE], line, e, "column %u: escape has no effect: '\\%c'", col, c);
	}
}

} // namespace re2c
