#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Lt:
	/*!re2c
		re2c:yyfill:enable = 0;
				Lt = [\u01c5-\u01c5\u01c8-\u01c8\u01cb-\u01cb\u01f2-\u01f2\u1f88-\u1f8f\u1f98-\u1f9f\u1fa8-\u1faf\u1fbc-\u1fbc\u1fcc-\u1fcc\u1ffc-\u1ffc];
		Lt { goto Lt; }
		* { return YYCURSOR == limit; }
	*/
}
static const char buffer_Lt [] = "\xC7\x85\xC7\x88\xC7\x8B\xC7\xB2\xE1\xBE\x88\xE1\xBE\x89\xE1\xBE\x8A\xE1\xBE\x8B\xE1\xBE\x8C\xE1\xBE\x8D\xE1\xBE\x8E\xE1\xBE\x8F\xE1\xBE\x98\xE1\xBE\x99\xE1\xBE\x9A\xE1\xBE\x9B\xE1\xBE\x9C\xE1\xBE\x9D\xE1\xBE\x9E\xE1\xBE\x9F\xE1\xBE\xA8\xE1\xBE\xA9\xE1\xBE\xAA\xE1\xBE\xAB\xE1\xBE\xAC\xE1\xBE\xAD\xE1\xBE\xAE\xE1\xBE\xAF\xE1\xBE\xBC\xE1\xBF\x8C\xE1\xBF\xBC\xFF";
int main ()
{
	if (!scan (buffer_Lt, buffer_Lt + sizeof (buffer_Lt) - 1))
		printf("test 'Lt' failed\n");
}
