/* Generated by re2c */
#line 1 "utf8_group_No.8.re"
#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
No:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	switch (yych) {
	case 0xC2:	goto yy4;
	case 0xE0:	goto yy5;
	case 0xE1:	goto yy6;
	case 0xE2:	goto yy7;
	case 0xE3:	goto yy8;
	case 0xEA:	goto yy9;
	case 0xF0:	goto yy10;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 12 "utf8_group_No.8.re"
	{ return YYCURSOR == limit; }
#line 32 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB2:
	case 0xB3:
	case 0xB9:
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy25;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA7:	goto yy52;
	case 0xAD:	goto yy51;
	case 0xAF:	goto yy50;
	case 0xB1:	goto yy49;
	case 0xB5:	goto yy30;
	case 0xBC:	goto yy48;
	default:	goto yy3;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x8D:	goto yy47;
	case 0x9F:	goto yy46;
	case 0xA7:	goto yy45;
	default:	goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x81:	goto yy44;
	case 0x82:	goto yy43;
	case 0x85:	goto yy42;
	case 0x86:	goto yy41;
	case 0x91:	goto yy40;
	case 0x92:	goto yy39;
	case 0x93:	goto yy38;
	case 0x9D:	goto yy37;
	case 0x9E:	goto yy36;
	case 0xB3:	goto yy35;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x86:	goto yy34;
	case 0x88:	goto yy33;
	case 0x89:	goto yy32;
	case 0x8A:	goto yy31;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy30;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x90:	goto yy15;
	case 0x91:	goto yy14;
	case 0x9D:	goto yy13;
	case 0x9F:	goto yy11;
	default:	goto yy3;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:	goto yy29;
	default:	goto yy12;
	}
yy12:
	YYCURSOR = YYMARKER;
	goto yy3;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8D:	goto yy28;
	default:	goto yy12;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:	goto yy27;
	default:	goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:	goto yy16;
	case 0x85:	goto yy17;
	case 0x86:	goto yy18;
	case 0x8C:	goto yy19;
	case 0xA1:	goto yy20;
	case 0xA4:	goto yy22;
	case 0xA9:	goto yy23;
	case 0xAD:	goto yy21;
	case 0xB9:	goto yy24;
	default:	goto yy12;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB3:	goto yy25;
	default:	goto yy12;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:	goto yy25;
	default:	goto yy12;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8A:	goto yy25;
	default:	goto yy12;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:	goto yy25;
	default:	goto yy12;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:	goto yy25;
	default:	goto yy12;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy25;
	default:	goto yy12;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:	goto yy25;
	default:	goto yy12;
	}
yy23:
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
	case 0xBD:
	case 0xBE:	goto yy25;
	default:	goto yy12;
	}
yy24:
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
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy25;
	default:	goto yy12;
	}
yy25:
	++YYCURSOR;
#line 11 "utf8_group_No.8.re"
	{ goto No; }
#line 311 "<stdout>"
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xA5:	goto yy25;
	default:	goto yy12;
	}
yy28:
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
	case 0xB1:	goto yy25;
	default:	goto yy12;
	}
yy29:
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
	case 0x8A:	goto yy25;
	default:	goto yy12;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:	goto yy25;
	default:	goto yy12;
	}
yy31:
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
	case 0xBF:	goto yy25;
	default:	goto yy12;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0x9F:	goto yy25;
	default:	goto yy12;
	}
yy33:
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
	case 0xA9:	goto yy25;
	default:	goto yy12;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:	goto yy25;
	default:	goto yy12;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBD:	goto yy25;
	default:	goto yy12;
	}
yy36:
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
	case 0x93:	goto yy25;
	default:	goto yy12;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy25;
	default:	goto yy12;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xBF:	goto yy25;
	default:	goto yy12;
	}
yy39:
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
	case 0x9B:	goto yy25;
	default:	goto yy12;
	}
yy40:
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
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy25;
	default:	goto yy12;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:	goto yy25;
	default:	goto yy12;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0x9F:	goto yy25;
	default:	goto yy12;
	}
yy43:
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
	case 0x89:	goto yy25;
	default:	goto yy12;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:	goto yy25;
	default:	goto yy12;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9A:	goto yy25;
	default:	goto yy12;
	}
yy46:
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
	case 0xB9:	goto yy25;
	default:	goto yy12;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xBC:	goto yy25;
	default:	goto yy12;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:	goto yy25;
	default:	goto yy12;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy25;
	default:	goto yy12;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:	goto yy25;
	default:	goto yy12;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy25;
	default:	goto yy12;
	}
yy52:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:	goto yy25;
	default:	goto yy12;
	}
}
#line 13 "utf8_group_No.8.re"

}
static const char buffer_No [] = "\xC2\xB2\xC2\xB3\xC2\xB9\xC2\xBC\xC2\xBD\xC2\xBE\xE0\xA7\xB4\xE0\xA7\xB5\xE0\xA7\xB6\xE0\xA7\xB7\xE0\xA7\xB8\xE0\xA7\xB9\xE0\xAD\xB2\xE0\xAD\xB3\xE0\xAD\xB4\xE0\xAD\xB5\xE0\xAD\xB6\xE0\xAD\xB7\xE0\xAF\xB0\xE0\xAF\xB1\xE0\xAF\xB2\xE0\xB1\xB8\xE0\xB1\xB9\xE0\xB1\xBA\xE0\xB1\xBB\xE0\xB1\xBC\xE0\xB1\xBD\xE0\xB1\xBE\xE0\xB5\xB0\xE0\xB5\xB1\xE0\xB5\xB2\xE0\xB5\xB3\xE0\xB5\xB4\xE0\xB5\xB5\xE0\xBC\xAA\xE0\xBC\xAB\xE0\xBC\xAC\xE0\xBC\xAD\xE0\xBC\xAE\xE0\xBC\xAF\xE0\xBC\xB0\xE0\xBC\xB1\xE0\xBC\xB2\xE0\xBC\xB3\xE1\x8D\xA9\xE1\x8D\xAA\xE1\x8D\xAB\xE1\x8D\xAC\xE1\x8D\xAD\xE1\x8D\xAE\xE1\x8D\xAF\xE1\x8D\xB0\xE1\x8D\xB1\xE1\x8D\xB2\xE1\x8D\xB3\xE1\x8D\xB4\xE1\x8D\xB5\xE1\x8D\xB6\xE1\x8D\xB7\xE1\x8D\xB8\xE1\x8D\xB9\xE1\x8D\xBA\xE1\x8D\xBB\xE1\x8D\xBC\xE1\x9F\xB0\xE1\x9F\xB1\xE1\x9F\xB2\xE1\x9F\xB3\xE1\x9F\xB4\xE1\x9F\xB5\xE1\x9F\xB6\xE1\x9F\xB7\xE1\x9F\xB8\xE1\x9F\xB9\xE1\xA7\x9A\xE2\x81\xB0\xE2\x81\xB4\xE2\x81\xB5\xE2\x81\xB6\xE2\x81\xB7\xE2\x81\xB8\xE2\x81\xB9\xE2\x82\x80\xE2\x82\x81\xE2\x82\x82\xE2\x82\x83\xE2\x82\x84\xE2\x82\x85\xE2\x82\x86\xE2\x82\x87\xE2\x82\x88\xE2\x82\x89\xE2\x85\x90\xE2\x85\x91\xE2\x85\x92\xE2\x85\x93\xE2\x85\x94\xE2\x85\x95\xE2\x85\x96\xE2\x85\x97\xE2\x85\x98\xE2\x85\x99\xE2\x85\x9A\xE2\x85\x9B\xE2\x85\x9C\xE2\x85\x9D\xE2\x85\x9E\xE2\x85\x9F\xE2\x86\x89\xE2\x91\xA0\xE2\x91\xA1\xE2\x91\xA2\xE2\x91\xA3\xE2\x91\xA4\xE2\x91\xA5\xE2\x91\xA6\xE2\x91\xA7\xE2\x91\xA8\xE2\x91\xA9\xE2\x91\xAA\xE2\x91\xAB\xE2\x91\xAC\xE2\x91\xAD\xE2\x91\xAE\xE2\x91\xAF\xE2\x91\xB0\xE2\x91\xB1\xE2\x91\xB2\xE2\x91\xB3\xE2\x91\xB4\xE2\x91\xB5\xE2\x91\xB6\xE2\x91\xB7\xE2\x91\xB8\xE2\x91\xB9\xE2\x91\xBA\xE2\x91\xBB\xE2\x91\xBC\xE2\x91\xBD\xE2\x91\xBE\xE2\x91\xBF\xE2\x92\x80\xE2\x92\x81\xE2\x92\x82\xE2\x92\x83\xE2\x92\x84\xE2\x92\x85\xE2\x92\x86\xE2\x92\x87\xE2\x92\x88\xE2\x92\x89\xE2\x92\x8A\xE2\x92\x8B\xE2\x92\x8C\xE2\x92\x8D\xE2\x92\x8E\xE2\x92\x8F\xE2\x92\x90\xE2\x92\x91\xE2\x92\x92\xE2\x92\x93\xE2\x92\x94\xE2\x92\x95\xE2\x92\x96\xE2\x92\x97\xE2\x92\x98\xE2\x92\x99\xE2\x92\x9A\xE2\x92\x9B\xE2\x93\xAA\xE2\x93\xAB\xE2\x93\xAC\xE2\x93\xAD\xE2\x93\xAE\xE2\x93\xAF\xE2\x93\xB0\xE2\x93\xB1\xE2\x93\xB2\xE2\x93\xB3\xE2\x93\xB4\xE2\x93\xB5\xE2\x93\xB6\xE2\x93\xB7\xE2\x93\xB8\xE2\x93\xB9\xE2\x93\xBA\xE2\x93\xBB\xE2\x93\xBC\xE2\x93\xBD\xE2\x93\xBE\xE2\x93\xBF\xE2\x9D\xB6\xE2\x9D\xB7\xE2\x9D\xB8\xE2\x9D\xB9\xE2\x9D\xBA\xE2\x9D\xBB\xE2\x9D\xBC\xE2\x9D\xBD\xE2\x9D\xBE\xE2\x9D\xBF\xE2\x9E\x80\xE2\x9E\x81\xE2\x9E\x82\xE2\x9E\x83\xE2\x9E\x84\xE2\x9E\x85\xE2\x9E\x86\xE2\x9E\x87\xE2\x9E\x88\xE2\x9E\x89\xE2\x9E\x8A\xE2\x9E\x8B\xE2\x9E\x8C\xE2\x9E\x8D\xE2\x9E\x8E\xE2\x9E\x8F\xE2\x9E\x90\xE2\x9E\x91\xE2\x9E\x92\xE2\x9E\x93\xE2\xB3\xBD\xE3\x86\x92\xE3\x86\x93\xE3\x86\x94\xE3\x86\x95\xE3\x88\xA0\xE3\x88\xA1\xE3\x88\xA2\xE3\x88\xA3\xE3\x88\xA4\xE3\x88\xA5\xE3\x88\xA6\xE3\x88\xA7\xE3\x88\xA8\xE3\x88\xA9\xE3\x89\x91\xE3\x89\x92\xE3\x89\x93\xE3\x89\x94\xE3\x89\x95\xE3\x89\x96\xE3\x89\x97\xE3\x89\x98\xE3\x89\x99\xE3\x89\x9A\xE3\x89\x9B\xE3\x89\x9C\xE3\x89\x9D\xE3\x89\x9E\xE3\x89\x9F\xE3\x8A\x80\xE3\x8A\x81\xE3\x8A\x82\xE3\x8A\x83\xE3\x8A\x84\xE3\x8A\x85\xE3\x8A\x86\xE3\x8A\x87\xE3\x8A\x88\xE3\x8A\x89\xE3\x8A\xB1\xE3\x8A\xB2\xE3\x8A\xB3\xE3\x8A\xB4\xE3\x8A\xB5\xE3\x8A\xB6\xE3\x8A\xB7\xE3\x8A\xB8\xE3\x8A\xB9\xE3\x8A\xBA\xE3\x8A\xBB\xE3\x8A\xBC\xE3\x8A\xBD\xE3\x8A\xBE\xE3\x8A\xBF\xEA\xA0\xB0\xEA\xA0\xB1\xEA\xA0\xB2\xEA\xA0\xB3\xEA\xA0\xB4\xEA\xA0\xB5\xF0\x90\x84\x87\xF0\x90\x84\x88\xF0\x90\x84\x89\xF0\x90\x84\x8A\xF0\x90\x84\x8B\xF0\x90\x84\x8C\xF0\x90\x84\x8D\xF0\x90\x84\x8E\xF0\x90\x84\x8F\xF0\x90\x84\x90\xF0\x90\x84\x91\xF0\x90\x84\x92\xF0\x90\x84\x93\xF0\x90\x84\x94\xF0\x90\x84\x95\xF0\x90\x84\x96\xF0\x90\x84\x97\xF0\x90\x84\x98\xF0\x90\x84\x99\xF0\x90\x84\x9A\xF0\x90\x84\x9B\xF0\x90\x84\x9C\xF0\x90\x84\x9D\xF0\x90\x84\x9E\xF0\x90\x84\x9F\xF0\x90\x84\xA0\xF0\x90\x84\xA1\xF0\x90\x84\xA2\xF0\x90\x84\xA3\xF0\x90\x84\xA4\xF0\x90\x84\xA5\xF0\x90\x84\xA6\xF0\x90\x84\xA7\xF0\x90\x84\xA8\xF0\x90\x84\xA9\xF0\x90\x84\xAA\xF0\x90\x84\xAB\xF0\x90\x84\xAC\xF0\x90\x84\xAD\xF0\x90\x84\xAE\xF0\x90\x84\xAF\xF0\x90\x84\xB0\xF0\x90\x84\xB1\xF0\x90\x84\xB2\xF0\x90\x84\xB3\xF0\x90\x85\xB5\xF0\x90\x85\xB6\xF0\x90\x85\xB7\xF0\x90\x85\xB8\xF0\x90\x86\x8A\xF0\x90\x8C\xA0\xF0\x90\x8C\xA1\xF0\x90\x8C\xA2\xF0\x90\x8C\xA3\xF0\x90\xA1\x98\xF0\x90\xA1\x99\xF0\x90\xA1\x9A\xF0\x90\xA1\x9B\xF0\x90\xA1\x9C\xF0\x90\xA1\x9D\xF0\x90\xA1\x9E\xF0\x90\xA1\x9F\xF0\x90\xA4\x96\xF0\x90\xA4\x97\xF0\x90\xA4\x98\xF0\x90\xA4\x99\xF0\x90\xA4\x9A\xF0\x90\xA4\x9B\xF0\x90\xA9\x80\xF0\x90\xA9\x81\xF0\x90\xA9\x82\xF0\x90\xA9\x83\xF0\x90\xA9\x84\xF0\x90\xA9\x85\xF0\x90\xA9\x86\xF0\x90\xA9\x87\xF0\x90\xA9\xBD\xF0\x90\xA9\xBE\xF0\x90\xAD\x98\xF0\x90\xAD\x99\xF0\x90\xAD\x9A\xF0\x90\xAD\x9B\xF0\x90\xAD\x9C\xF0\x90\xAD\x9D\xF0\x90\xAD\x9E\xF0\x90\xAD\x9F\xF0\x90\xAD\xB8\xF0\x90\xAD\xB9\xF0\x90\xAD\xBA\xF0\x90\xAD\xBB\xF0\x90\xAD\xBC\xF0\x90\xAD\xBD\xF0\x90\xAD\xBE\xF0\x90\xAD\xBF\xF0\x90\xB9\xA0\xF0\x90\xB9\xA1\xF0\x90\xB9\xA2\xF0\x90\xB9\xA3\xF0\x90\xB9\xA4\xF0\x90\xB9\xA5\xF0\x90\xB9\xA6\xF0\x90\xB9\xA7\xF0\x90\xB9\xA8\xF0\x90\xB9\xA9\xF0\x90\xB9\xAA\xF0\x90\xB9\xAB\xF0\x90\xB9\xAC\xF0\x90\xB9\xAD\xF0\x90\xB9\xAE\xF0\x90\xB9\xAF\xF0\x90\xB9\xB0\xF0\x90\xB9\xB1\xF0\x90\xB9\xB2\xF0\x90\xB9\xB3\xF0\x90\xB9\xB4\xF0\x90\xB9\xB5\xF0\x90\xB9\xB6\xF0\x90\xB9\xB7\xF0\x90\xB9\xB8\xF0\x90\xB9\xB9\xF0\x90\xB9\xBA\xF0\x90\xB9\xBB\xF0\x90\xB9\xBC\xF0\x90\xB9\xBD\xF0\x90\xB9\xBE\xF0\x91\x81\x92\xF0\x91\x81\x93\xF0\x91\x81\x94\xF0\x91\x81\x95\xF0\x91\x81\x96\xF0\x91\x81\x97\xF0\x91\x81\x98\xF0\x91\x81\x99\xF0\x91\x81\x9A\xF0\x91\x81\x9B\xF0\x91\x81\x9C\xF0\x91\x81\x9D\xF0\x91\x81\x9E\xF0\x91\x81\x9F\xF0\x91\x81\xA0\xF0\x91\x81\xA1\xF0\x91\x81\xA2\xF0\x91\x81\xA3\xF0\x91\x81\xA4\xF0\x91\x81\xA5\xF0\x9D\x8D\xA0\xF0\x9D\x8D\xA1\xF0\x9D\x8D\xA2\xF0\x9D\x8D\xA3\xF0\x9D\x8D\xA4\xF0\x9D\x8D\xA5\xF0\x9D\x8D\xA6\xF0\x9D\x8D\xA7\xF0\x9D\x8D\xA8\xF0\x9D\x8D\xA9\xF0\x9D\x8D\xAA\xF0\x9D\x8D\xAB\xF0\x9D\x8D\xAC\xF0\x9D\x8D\xAD\xF0\x9D\x8D\xAE\xF0\x9D\x8D\xAF\xF0\x9D\x8D\xB0\xF0\x9D\x8D\xB1\xF0\x9F\x84\x80\xF0\x9F\x84\x81\xF0\x9F\x84\x82\xF0\x9F\x84\x83\xF0\x9F\x84\x84\xF0\x9F\x84\x85\xF0\x9F\x84\x86\xF0\x9F\x84\x87\xF0\x9F\x84\x88\xF0\x9F\x84\x89\xF0\x9F\x84\x8A\xFF";
int main ()
{
	if (!scan (buffer_No, buffer_No + sizeof (buffer_No) - 1))
		printf("test 'No' failed\n");
}
