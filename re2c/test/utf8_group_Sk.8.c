/* Generated by re2c */
#line 1 "utf8_group_Sk.8.re"
#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Sk:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	switch (yych) {
	case '^':
	case '`':	goto yy4;
	case 0xC2:	goto yy6;
	case 0xCB:	goto yy7;
	case 0xCD:	goto yy8;
	case 0xCE:	goto yy9;
	case 0xE1:	goto yy10;
	case 0xE3:	goto yy11;
	case 0xEA:	goto yy12;
	case 0xEF:	goto yy13;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 12 "utf8_group_Sk.8.re"
	{ return YYCURSOR == limit; }
#line 35 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 11 "utf8_group_Sk.8.re"
	{ goto Sk; }
#line 41 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA8:
	case 0xAF:
	case 0xB4:
	case 0xB8:	goto yy20;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
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
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAD:
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
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB5:	goto yy20;
	default:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x85:	goto yy20;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xBE:	goto yy25;
	case 0xBF:	goto yy24;
	default:	goto yy3;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x82:	goto yy23;
	default:	goto yy3;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9C:	goto yy22;
	case 0x9E:	goto yy21;
	default:	goto yy3;
	}
yy13:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xAE:	goto yy18;
	case 0xAF:	goto yy19;
	case 0xBC:	goto yy17;
	case 0xBD:	goto yy16;
	case 0xBF:	goto yy14;
	default:	goto yy3;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA3:	goto yy20;
	default:	goto yy15;
	}
yy15:
	YYCURSOR = YYMARKER;
	goto yy3;
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy20;
	default:	goto yy15;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBE:	goto yy20;
	default:	goto yy15;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
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
	default:	goto yy15;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:	goto yy20;
	default:	goto yy15;
	}
yy20:
	yych = *++YYCURSOR;
	goto yy5;
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0x8A:	goto yy20;
	default:	goto yy15;
	}
yy22:
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
	case 0xA0:
	case 0xA1:	goto yy20;
	default:	goto yy15;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:
	case 0x9C:	goto yy20;
	default:	goto yy15;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xBD:
	case 0xBE:	goto yy20;
	default:	goto yy15;
	}
yy25:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xBD:
	case 0xBF:	goto yy20;
	default:	goto yy15;
	}
}
#line 13 "utf8_group_Sk.8.re"

}
static const char buffer_Sk [] = "\x5E\x60\xC2\xA8\xC2\xAF\xC2\xB4\xC2\xB8\xCB\x82\xCB\x83\xCB\x84\xCB\x85\xCB\x92\xCB\x93\xCB\x94\xCB\x95\xCB\x96\xCB\x97\xCB\x98\xCB\x99\xCB\x9A\xCB\x9B\xCB\x9C\xCB\x9D\xCB\x9E\xCB\x9F\xCB\xA5\xCB\xA6\xCB\xA7\xCB\xA8\xCB\xA9\xCB\xAA\xCB\xAB\xCB\xAD\xCB\xAF\xCB\xB0\xCB\xB1\xCB\xB2\xCB\xB3\xCB\xB4\xCB\xB5\xCB\xB6\xCB\xB7\xCB\xB8\xCB\xB9\xCB\xBA\xCB\xBB\xCB\xBC\xCB\xBD\xCB\xBE\xCB\xBF\xCD\xB5\xCE\x84\xCE\x85\xE1\xBE\xBD\xE1\xBE\xBF\xE1\xBF\x80\xE1\xBF\x81\xE1\xBF\x8D\xE1\xBF\x8E\xE1\xBF\x8F\xE1\xBF\x9D\xE1\xBF\x9E\xE1\xBF\x9F\xE1\xBF\xAD\xE1\xBF\xAE\xE1\xBF\xAF\xE1\xBF\xBD\xE1\xBF\xBE\xE3\x82\x9B\xE3\x82\x9C\xEA\x9C\x80\xEA\x9C\x81\xEA\x9C\x82\xEA\x9C\x83\xEA\x9C\x84\xEA\x9C\x85\xEA\x9C\x86\xEA\x9C\x87\xEA\x9C\x88\xEA\x9C\x89\xEA\x9C\x8A\xEA\x9C\x8B\xEA\x9C\x8C\xEA\x9C\x8D\xEA\x9C\x8E\xEA\x9C\x8F\xEA\x9C\x90\xEA\x9C\x91\xEA\x9C\x92\xEA\x9C\x93\xEA\x9C\x94\xEA\x9C\x95\xEA\x9C\x96\xEA\x9C\xA0\xEA\x9C\xA1\xEA\x9E\x89\xEA\x9E\x8A\xEF\xAE\xB2\xEF\xAE\xB3\xEF\xAE\xB4\xEF\xAE\xB5\xEF\xAE\xB6\xEF\xAE\xB7\xEF\xAE\xB8\xEF\xAE\xB9\xEF\xAE\xBA\xEF\xAE\xBB\xEF\xAE\xBC\xEF\xAE\xBD\xEF\xAE\xBE\xEF\xAE\xBF\xEF\xAF\x80\xEF\xAF\x81\xEF\xBC\xBE\xEF\xBD\x80\xEF\xBF\xA3\xFF";
int main ()
{
	if (!scan (buffer_Sk, buffer_Sk + sizeof (buffer_Sk) - 1))
		printf("test 'Sk' failed\n");
}
