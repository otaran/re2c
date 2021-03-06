#ifndef _RE2C_IR_REGEXP_REGEXP_NULL_
#define _RE2C_IR_REGEXP_REGEXP_NULL_

#include "src/ir/regexp/regexp.h"

namespace re2c
{

class NullOp: public RegExp
{
public:
	void split (CharSet &);
	void calcSize (Char *);
	uint32_t fixedLength ();
	uint32_t compile (Char *, Ins *);
	void decompile ();
	void display (std::ostream & o) const;
};

} // end namespace re2c

#endif // _RE2C_IR_REGEXP_REGEXP_NULL_
