/* Generated by re2c */
#line 1 "unicode_group_Sm.x--encoding-policy(fail).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sm:
	
#line 13 "unicode_group_Sm.x--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x231F) {
		if (yych <= 0x208C) {
			if (yych <= 0x00D7) {
				if (yych <= '}') {
					if (yych <= ';') {
						if (yych == '+') goto yy4;
					} else {
						if (yych <= '>') goto yy4;
						if (yych == '|') goto yy4;
					}
				} else {
					if (yych <= 0x00AC) {
						if (yych <= '~') goto yy4;
						if (yych >= 0x00AC) goto yy4;
					} else {
						if (yych == 0x00B1) goto yy4;
						if (yych >= 0x00D7) goto yy4;
					}
				}
			} else {
				if (yych <= 0x2043) {
					if (yych <= 0x03F5) {
						if (yych == 0x00F7) goto yy4;
					} else {
						if (yych <= 0x03F6) goto yy4;
						if (yych <= 0x0605) goto yy2;
						if (yych <= 0x0608) goto yy4;
					}
				} else {
					if (yych <= 0x2052) {
						if (yych <= 0x2044) goto yy4;
						if (yych >= 0x2052) goto yy4;
					} else {
						if (yych <= 0x2079) goto yy2;
						if (yych <= 0x207C) goto yy4;
						if (yych >= 0x208A) goto yy4;
					}
				}
			}
		} else {
			if (yych <= 0x21A3) {
				if (yych <= 0x218F) {
					if (yych <= 0x213F) {
						if (yych == 0x2118) goto yy4;
					} else {
						if (yych <= 0x2144) goto yy4;
						if (yych == 0x214B) goto yy4;
					}
				} else {
					if (yych <= 0x219B) {
						if (yych <= 0x2194) goto yy4;
						if (yych >= 0x219A) goto yy4;
					} else {
						if (yych == 0x21A0) goto yy4;
						if (yych >= 0x21A3) goto yy4;
					}
				}
			} else {
				if (yych <= 0x21D1) {
					if (yych <= 0x21AD) {
						if (yych == 0x21A6) goto yy4;
					} else {
						if (yych <= 0x21AE) goto yy4;
						if (yych <= 0x21CD) goto yy2;
						if (yych <= 0x21CF) goto yy4;
					}
				} else {
					if (yych <= 0x21F3) {
						if (yych == 0x21D3) goto yy2;
						if (yych <= 0x21D4) goto yy4;
					} else {
						if (yych <= 0x22FF) goto yy4;
						if (yych <= 0x2307) goto yy2;
						if (yych <= 0x230B) goto yy4;
					}
				}
			}
		}
	} else {
		if (yych <= 0x29D7) {
			if (yych <= 0x266E) {
				if (yych <= 0x23E1) {
					if (yych <= 0x237C) {
						if (yych <= 0x2321) goto yy4;
						if (yych >= 0x237C) goto yy4;
					} else {
						if (yych <= 0x239A) goto yy2;
						if (yych <= 0x23B3) goto yy4;
						if (yych >= 0x23DC) goto yy4;
					}
				} else {
					if (yych <= 0x25C0) {
						if (yych == 0x25B7) goto yy4;
					} else {
						if (yych <= 0x25C1) goto yy4;
						if (yych <= 0x25F7) goto yy2;
						if (yych <= 0x25FF) goto yy4;
					}
				}
			} else {
				if (yych <= 0x27CC) {
					if (yych <= 0x27C4) {
						if (yych <= 0x266F) goto yy4;
						if (yych >= 0x27C0) goto yy4;
					} else {
						if (yych <= 0x27C6) goto yy2;
						if (yych != 0x27CB) goto yy4;
					}
				} else {
					if (yych <= 0x27FF) {
						if (yych <= 0x27CD) goto yy2;
						if (yych <= 0x27E5) goto yy4;
						if (yych >= 0x27F0) goto yy4;
					} else {
						if (yych <= 0x28FF) goto yy2;
						if (yych <= 0x2982) goto yy4;
						if (yych >= 0x2999) goto yy4;
					}
				}
			}
		} else {
			if (yych <= 0xFE62) {
				if (yych <= 0x2B46) {
					if (yych <= 0x29FD) {
						if (yych <= 0x29DB) goto yy2;
						if (yych <= 0x29FB) goto yy4;
					} else {
						if (yych <= 0x2AFF) goto yy4;
						if (yych <= 0x2B2F) goto yy2;
						if (yych <= 0x2B44) goto yy4;
					}
				} else {
					if (yych <= 0xD835) {
						if (yych <= 0x2B4C) goto yy4;
						if (yych >= 0xD835) goto yy6;
					} else {
						if (yych == 0xFB29) goto yy4;
						if (yych >= 0xFE62) goto yy4;
					}
				}
			} else {
				if (yych <= 0xFF5B) {
					if (yych <= 0xFF0A) {
						if (yych <= 0xFE63) goto yy2;
						if (yych <= 0xFE66) goto yy4;
					} else {
						if (yych <= 0xFF0B) goto yy4;
						if (yych <= 0xFF1B) goto yy2;
						if (yych <= 0xFF1E) goto yy4;
					}
				} else {
					if (yych <= 0xFFE1) {
						if (yych == 0xFF5D) goto yy2;
						if (yych <= 0xFF5E) goto yy4;
					} else {
						if (yych <= 0xFFE2) goto yy4;
						if (yych <= 0xFFE8) goto yy2;
						if (yych <= 0xFFEC) goto yy4;
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Sm.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 185 "unicode_group_Sm.x--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Sm.x--encoding-policy(fail).re"
	{ goto Sm; }
#line 191 "unicode_group_Sm.x--encoding-policy(fail).c"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDF35) {
		if (yych <= 0xDEFA) {
			if (yych <= 0xDEC1) {
				if (yych <= 0xDEC0) goto yy3;
			} else {
				if (yych != 0xDEDB) goto yy3;
			}
		} else {
			if (yych <= 0xDF14) {
				if (yych >= 0xDEFC) goto yy3;
			} else {
				if (yych <= 0xDF15) goto yy7;
				if (yych <= 0xDF34) goto yy3;
			}
		}
	} else {
		if (yych <= 0xDF88) {
			if (yych <= 0xDF4F) {
				if (yych <= 0xDF4E) goto yy3;
			} else {
				if (yych != 0xDF6F) goto yy3;
			}
		} else {
			if (yych <= 0xDFA9) {
				if (yych <= 0xDF89) goto yy7;
				if (yych <= 0xDFA8) goto yy3;
			} else {
				if (yych != 0xDFC3) goto yy3;
			}
		}
	}
yy7:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy5;
}
#line 14 "unicode_group_Sm.x--encoding-policy(fail).re"

}
static const unsigned int chars_Sm [] = {0x2b,0x2b,  0x3c,0x3e,  0x7c,0x7c,  0x7e,0x7e,  0xac,0xac,  0xb1,0xb1,  0xd7,0xd7,  0xf7,0xf7,  0x3f6,0x3f6,  0x606,0x608,  0x2044,0x2044,  0x2052,0x2052,  0x207a,0x207c,  0x208a,0x208c,  0x2118,0x2118,  0x2140,0x2144,  0x214b,0x214b,  0x2190,0x2194,  0x219a,0x219b,  0x21a0,0x21a0,  0x21a3,0x21a3,  0x21a6,0x21a6,  0x21ae,0x21ae,  0x21ce,0x21cf,  0x21d2,0x21d2,  0x21d4,0x21d4,  0x21f4,0x22ff,  0x2308,0x230b,  0x2320,0x2321,  0x237c,0x237c,  0x239b,0x23b3,  0x23dc,0x23e1,  0x25b7,0x25b7,  0x25c1,0x25c1,  0x25f8,0x25ff,  0x266f,0x266f,  0x27c0,0x27c4,  0x27c7,0x27ca,  0x27cc,0x27cc,  0x27ce,0x27e5,  0x27f0,0x27ff,  0x2900,0x2982,  0x2999,0x29d7,  0x29dc,0x29fb,  0x29fe,0x2aff,  0x2b30,0x2b44,  0x2b47,0x2b4c,  0xfb29,0xfb29,  0xfe62,0xfe62,  0xfe64,0xfe66,  0xff0b,0xff0b,  0xff1c,0xff1e,  0xff5c,0xff5c,  0xff5e,0xff5e,  0xffe2,0xffe2,  0xffe9,0xffec,  0x1d6c1,0x1d6c1,  0x1d6db,0x1d6db,  0x1d6fb,0x1d6fb,  0x1d715,0x1d715,  0x1d735,0x1d735,  0x1d74f,0x1d74f,  0x1d76f,0x1d76f,  0x1d789,0x1d789,  0x1d7a9,0x1d7a9,  0x1d7c3,0x1d7c3,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned short * s)
{
	unsigned short * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Sm = new YYCTYPE [1898];
	unsigned int buffer_len = encode_utf16 (chars_Sm, sizeof (chars_Sm) / sizeof (unsigned int), buffer_Sm);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sm), reinterpret_cast<const YYCTYPE *> (buffer_Sm + buffer_len)))
		printf("test 'Sm' failed\n");
	delete [] buffer_Sm;
	return 0;
}
