#include <map>
#include <utility>
#include <vector>

#include "src/codegen/skeleton/path.h"
#include "src/codegen/skeleton/skeleton.h"
#include "src/codegen/skeleton/way.h"
#include "src/conf/warn.h"
#include "src/globals.h"
#include "src/ir/rule_rank.h"
#include "src/util/u32lim.h"

namespace re2c
{

// We don't need all patterns that cause undefined behaviour.
// We only need some examples, the shorter the better.
// See also note [counting skeleton edges].
Node::nakeds_t Node::naked_ways (way_t & prefix, std::vector<way_t> & ways)
{
	if (!rule.rank.is_none ())
	{
		return nakeds_t::from32(0u);
	}
	else if (end ())
	{
		ways.push_back (prefix);
		return nakeds_t::from64(prefix.size ());
	}
	else if (loop < 2)
	{
		local_inc _ (loop);
		nakeds_t size = nakeds_t::from32(0u);
		for (arcsets_t::iterator i = arcsets.begin (); i != arcsets.end (); ++i)
		{
			prefix.push_back (&i->second);
			size = size + i->first->naked_ways (prefix, ways);
			prefix.pop_back ();
			if (size.overflow ())
			{
				return nakeds_t::limit ();
			}
		}
		return size;
	}
	else
	{
		return nakeds_t::from32(0u);
	}
}

void Skeleton::warn_undefined_control_flow ()
{
	way_t prefix;
	std::vector<way_t> ways;
	const bool overflow = nodes->naked_ways (prefix, ways).overflow ();
	if (!ways.empty ())
	{
		warn.undefined_control_flow (line, cond, ways, overflow);
	}
	else if (overflow)
	{
		warn.fail (Warn::UNDEFINED_CONTROL_FLOW, line, "DFA is too large to check undefined control flow");
	}
}

} // namespace re2c
