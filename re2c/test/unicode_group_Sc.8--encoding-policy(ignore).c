/* Generated by re2c */
#line 1 "unicode_group_Sc.8--encoding-policy(ignore).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sc:
	
#line 13 "unicode_group_Sc.8--encoding-policy(ignore).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '$':	goto yy4;
	case 0xC2:	goto yy6;
	case 0xD8:	goto yy7;
	case 0xE0:	goto yy8;
	case 0xE1:	goto yy9;
	case 0xE2:	goto yy10;
	case 0xEA:	goto yy11;
	case 0xEF:	goto yy12;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Sc.8--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 33 "unicode_group_Sc.8--encoding-policy(ignore).c"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Sc.8--encoding-policy(ignore).re"
	{ goto Sc; }
#line 39 "unicode_group_Sc.8--encoding-policy(ignore).c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:	goto yy18;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8B:	goto yy18;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA7:	goto yy25;
	case 0xAB:	goto yy24;
	case 0xAF:	goto yy23;
	case 0xB8:	goto yy22;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9F:	goto yy21;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x82:	goto yy20;
	default:	goto yy3;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy19;
	default:	goto yy3;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xB7:	goto yy17;
	case 0xB9:	goto yy16;
	case 0xBC:	goto yy15;
	case 0xBF:	goto yy13;
	default:	goto yy3;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA5:
	case 0xA6:	goto yy18;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYMARKER;
	goto yy3;
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:	goto yy18;
	default:	goto yy14;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA9:	goto yy18;
	default:	goto yy14;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBC:	goto yy18;
	default:	goto yy14;
	}
yy18:
	yych = *++YYCURSOR;
	goto yy5;
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB8:	goto yy18;
	default:	goto yy14;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB9:	goto yy18;
	default:	goto yy14;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:	goto yy18;
	default:	goto yy14;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBF:	goto yy18;
	default:	goto yy14;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB9:	goto yy18;
	default:	goto yy14;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB1:	goto yy18;
	default:	goto yy14;
	}
yy25:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xB2:
	case 0xB3:
	case 0xBB:	goto yy18;
	default:	goto yy14;
	}
}
#line 14 "unicode_group_Sc.8--encoding-policy(ignore).re"

}
static const unsigned int chars_Sc [] = {0x24,0x24,  0xa2,0xa5,  0x60b,0x60b,  0x9f2,0x9f3,  0x9fb,0x9fb,  0xaf1,0xaf1,  0xbf9,0xbf9,  0xe3f,0xe3f,  0x17db,0x17db,  0x20a0,0x20b9,  0xa838,0xa838,  0xfdfc,0xfdfc,  0xfe69,0xfe69,  0xff04,0xff04,  0xffe0,0xffe1,  0xffe5,0xffe6,  0x0,0x0};
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
	YYCTYPE * buffer_Sc = new YYCTYPE [192];
	unsigned int buffer_len = encode_utf8 (chars_Sc, sizeof (chars_Sc) / sizeof (unsigned int), buffer_Sc);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sc), reinterpret_cast<const YYCTYPE *> (buffer_Sc + buffer_len)))
		printf("test 'Sc' failed\n");
	delete [] buffer_Sc;
	return 0;
}
