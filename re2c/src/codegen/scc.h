#ifndef _RE2C_CODEGEN_SCC_
#define _RE2C_CODEGEN_SCC_

#include "src/util/c99_stdint.h"
#include "src/util/forbid_copy.h"

namespace re2c {

class State;

static const uint32_t cInfinity = ~0u;

class SCC
{
public:
	State ** top;
	State ** stk;

	SCC (uint32_t);
	~SCC ();
	void traverse (State *);

	FORBID_COPY (SCC);
};

bool state_is_in_non_trivial_SCC (const State * s);
uint32_t maxDist (State * s);
void calcDepth (State * head);

} // namespace re2c

#endif // _RE2C_CODEGEN_SCC_
