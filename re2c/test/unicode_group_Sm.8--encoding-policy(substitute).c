/* Generated by re2c */
#line 1 "unicode_group_Sm.8--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sm:
	
#line 13 "unicode_group_Sm.8--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '+':
	case '<':
	case '=':
	case '>':
	case '|':
	case '~':	goto yy4;
	case 0xC2:	goto yy6;
	case 0xC3:	goto yy7;
	case 0xCF:	goto yy8;
	case 0xD8:	goto yy9;
	case 0xE2:	goto yy10;
	case 0xEF:	goto yy11;
	case 0xF0:	goto yy12;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Sm.8--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 38 "unicode_group_Sm.8--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Sm.8--encoding-policy(substitute).re"
	{ goto Sm; }
#line 44 "unicode_group_Sm.8--encoding-policy(substitute).c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAC:
	case 0xB1:	goto yy20;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x97:
	case 0xB7:	goto yy20;
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB6:	goto yy20;
	default:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:
	case 0x87:
	case 0x88:	goto yy20;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x81:	goto yy43;
	case 0x82:	goto yy42;
	case 0x84:	goto yy41;
	case 0x85:	goto yy40;
	case 0x86:	goto yy39;
	case 0x87:	goto yy38;
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0xA4:
	case 0xA5:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:	goto yy37;
	case 0x8C:	goto yy36;
	case 0x8D:	goto yy35;
	case 0x8E:	goto yy34;
	case 0x8F:	goto yy33;
	case 0x96:	goto yy44;
	case 0x97:	goto yy32;
	case 0x99:	goto yy31;
	case 0x9F:	goto yy30;
	case 0xA6:	goto yy28;
	case 0xA7:	goto yy27;
	case 0xAC:	goto yy29;
	case 0xAD:	goto yy26;
	default:	goto yy3;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xAC:	goto yy25;
	case 0xB9:	goto yy24;
	case 0xBC:	goto yy23;
	case 0xBD:	goto yy22;
	case 0xBF:	goto yy21;
	default:	goto yy3;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9D:	goto yy13;
	default:	goto yy3;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:	goto yy15;
	case 0x9C:	goto yy18;
	case 0x9D:	goto yy16;
	case 0x9E:	goto yy17;
	case 0x9F:	goto yy19;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYMARKER;
	goto yy3;
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x9B:
	case 0xBB:	goto yy20;
	default:	goto yy14;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8F:
	case 0xAF:	goto yy20;
	default:	goto yy14;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0xA9:	goto yy20;
	default:	goto yy14;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x95:
	case 0xB5:	goto yy20;
	default:	goto yy14;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x83:	goto yy20;
	default:	goto yy14;
	}
yy20:
	yych = *++YYCURSOR;
	goto yy5;
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA2:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:	goto yy20;
	default:	goto yy14;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9C:
	case 0x9E:	goto yy20;
	default:	goto yy14;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8B:
	case 0x9C:
	case 0x9D:
	case 0x9E:	goto yy20;
	default:	goto yy14;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA2:
	case 0xA4:
	case 0xA5:
	case 0xA6:	goto yy20;
	default:	goto yy14;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA9:	goto yy20;
	default:	goto yy14;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:	goto yy20;
	default:	goto yy14;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8C:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:	goto yy20;
	default:	goto yy14;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:	goto yy20;
	default:	goto yy14;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:	goto yy20;
	default:	goto yy14;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBC:	goto yy20;
	default:	goto yy14;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0xA0:
	case 0xA1:	goto yy20;
	default:	goto yy14;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8E:
	case 0x8F:
	case 0x92:
	case 0x94:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy14;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x9A:
	case 0x9B:
	case 0xA0:
	case 0xA3:
	case 0xA6:
	case 0xAE:	goto yy20;
	default:	goto yy14;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x8B:	goto yy20;
	default:	goto yy14;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:	goto yy20;
	default:	goto yy14;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8A:
	case 0x8B:
	case 0x8C:	goto yy20;
	default:	goto yy14;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x92:
	case 0xBA:
	case 0xBB:
	case 0xBC:	goto yy20;
	default:	goto yy14;
	}
yy44:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xB7:	goto yy20;
	default:	goto yy14;
	}
}
#line 14 "unicode_group_Sm.8--encoding-policy(substitute).re"

}
static const unsigned int chars_Sm [] = {0x2b,0x2b,  0x3c,0x3e,  0x7c,0x7c,  0x7e,0x7e,  0xac,0xac,  0xb1,0xb1,  0xd7,0xd7,  0xf7,0xf7,  0x3f6,0x3f6,  0x606,0x608,  0x2044,0x2044,  0x2052,0x2052,  0x207a,0x207c,  0x208a,0x208c,  0x2118,0x2118,  0x2140,0x2144,  0x214b,0x214b,  0x2190,0x2194,  0x219a,0x219b,  0x21a0,0x21a0,  0x21a3,0x21a3,  0x21a6,0x21a6,  0x21ae,0x21ae,  0x21ce,0x21cf,  0x21d2,0x21d2,  0x21d4,0x21d4,  0x21f4,0x22ff,  0x2308,0x230b,  0x2320,0x2321,  0x237c,0x237c,  0x239b,0x23b3,  0x23dc,0x23e1,  0x25b7,0x25b7,  0x25c1,0x25c1,  0x25f8,0x25ff,  0x266f,0x266f,  0x27c0,0x27c4,  0x27c7,0x27ca,  0x27cc,0x27cc,  0x27ce,0x27e5,  0x27f0,0x27ff,  0x2900,0x2982,  0x2999,0x29d7,  0x29dc,0x29fb,  0x29fe,0x2aff,  0x2b30,0x2b44,  0x2b47,0x2b4c,  0xfb29,0xfb29,  0xfe62,0xfe62,  0xfe64,0xfe66,  0xff0b,0xff0b,  0xff1c,0xff1e,  0xff5c,0xff5c,  0xff5e,0xff5e,  0xffe2,0xffe2,  0xffe9,0xffec,  0x1d6c1,0x1d6c1,  0x1d6db,0x1d6db,  0x1d6fb,0x1d6fb,  0x1d715,0x1d715,  0x1d735,0x1d735,  0x1d74f,0x1d74f,  0x1d76f,0x1d76f,  0x1d789,0x1d789,  0x1d7a9,0x1d7a9,  0x1d7c3,0x1d7c3,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned char * s)
{
	unsigned char * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	YYCTYPE * buffer_Sm = new YYCTYPE [3796];
	unsigned int buffer_len = encode_utf8 (chars_Sm, sizeof (chars_Sm) / sizeof (unsigned int), buffer_Sm);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sm), reinterpret_cast<const YYCTYPE *> (buffer_Sm + buffer_len)))
		printf("test 'Sm' failed\n");
	delete [] buffer_Sm;
	return 0;
}
