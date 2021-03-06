#ifndef _RE2C_IR_REGEXP_REGEXP_ALT_
#define _RE2C_IR_REGEXP_REGEXP_ALT_

#include "src/ir/regexp/regexp.h"

namespace re2c
{

class AltOp: public RegExp
{
	RegExp * exp1;
	RegExp * exp2;

public:
	inline AltOp (RegExp * e1, RegExp * e2)
		: exp1 (e1)
		, exp2 (e2)
	{}
	void split (CharSet &);
	void calcSize (Char *);
	uint32_t fixedLength ();
	uint32_t compile (Char *, Ins *);
	void decompile ();
	void display (std::ostream & o) const;
	friend RegExp * mkAlt (RegExp *, RegExp *);

	FORBID_COPY (AltOp);
};

} // end namespace re2c

#endif // _RE2C_IR_REGEXP_REGEXP_ALT_
