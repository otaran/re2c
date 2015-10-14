/* Generated by re2c */
#line 1 "unicode_group_Cf.8--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cf:
	
#line 13 "unicode_group_Cf.8--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xC2:	goto yy4;
	case 0xD8:	goto yy5;
	case 0xDB:	goto yy6;
	case 0xDC:	goto yy7;
	case 0xE1:	goto yy8;
	case 0xE2:	goto yy9;
	case 0xEF:	goto yy10;
	case 0xF0:	goto yy11;
	case 0xF3:	goto yy12;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Cf.8--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 34 "unicode_group_Cf.8--encoding-policy(substitute).c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAD:	goto yy17;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:	goto yy17;
	default:	goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:	goto yy17;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8F:	goto yy17;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9E:	goto yy27;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy26;
	case 0x81:	goto yy25;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xBB:	goto yy24;
	case 0xBF:	goto yy23;
	default:	goto yy3;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x91:	goto yy20;
	case 0x9D:	goto yy19;
	default:	goto yy3;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy13;
	default:	goto yy3;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy15;
	case 0x81:	goto yy16;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYMARKER;
	goto yy3;
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
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
	case 0xBF:	goto yy17;
	default:	goto yy14;
	}
yy16:
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
	case 0xBF:	goto yy17;
	default:	goto yy14;
	}
yy17:
	++YYCURSOR;
#line 12 "unicode_group_Cf.8--encoding-policy(substitute).re"
	{ goto Cf; }
#line 216 "unicode_group_Cf.8--encoding-policy(substitute).c"
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:	goto yy22;
	default:	goto yy14;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:	goto yy21;
	default:	goto yy14;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBD:	goto yy17;
	default:	goto yy14;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:	goto yy17;
	default:	goto yy14;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB9:
	case 0xBA:
	case 0xBB:	goto yy17;
	default:	goto yy14;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBF:	goto yy17;
	default:	goto yy14;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:	goto yy17;
	default:	goto yy14;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:	goto yy17;
	default:	goto yy14;
	}
yy27:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xB4:
	case 0xB5:	goto yy17;
	default:	goto yy14;
	}
}
#line 14 "unicode_group_Cf.8--encoding-policy(substitute).re"

}
static const unsigned int chars_Cf [] = {0xad,0xad,  0x600,0x603,  0x6dd,0x6dd,  0x70f,0x70f,  0x17b4,0x17b5,  0x200b,0x200f,  0x202a,0x202e,  0x2060,0x2064,  0x206a,0x206f,  0xfeff,0xfeff,  0xfff9,0xfffb,  0x110bd,0x110bd,  0x1d173,0x1d17a,  0xe0001,0xe0001,  0xe0020,0xe007f,  0x0,0x0};
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
	YYCTYPE * buffer_Cf = new YYCTYPE [564];
	unsigned int buffer_len = encode_utf8 (chars_Cf, sizeof (chars_Cf) / sizeof (unsigned int), buffer_Cf);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Cf), reinterpret_cast<const YYCTYPE *> (buffer_Cf + buffer_len)))
		printf("test 'Cf' failed\n");
	delete [] buffer_Cf;
	return 0;
}
