/* Generated by re2c */
#line 1 "cvsignore.re"

#define YYFILL(n) if (cursor >= limit) break;
#define YYCTYPE char
#define YYCURSOR cursor
#define YYLIMIT limit
#define YYMARKER marker

#line 16 "cvsignore.re"


#define APPEND(text) \
	append(output, outsize, text, sizeof(text) - sizeof(YYCTYPE))

inline void append(YYCTYPE *output, size_t & outsize, const YYCTYPE * text, size_t len)
{
	memcpy(output + outsize, text, len);
	outsize += (len / sizeof(YYCTYPE));
}

void scan(YYCTYPE *pText, size_t *pSize, int *pbChanged)
{
	// rule
	// scan lines
	// find $ in lines
	//   compact $<keyword>: .. $ to $<keyword>$
  
	YYCTYPE *output;
	const YYCTYPE *cursor, *limit, *marker;

	cursor = marker = output = *pText;

	size_t insize = *pSize;
	size_t outsize = 0;

	limit = cursor + insize;

	while(1) {
loop:

#line 43 "cvsignore.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	switch (yych) {
	case '$':	goto yy2;
	default:	goto yy4;
	}
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'D':	goto yy10;
	case 'I':	goto yy9;
	case 'L':	goto yy8;
	case 'R':	goto yy7;
	case 'S':	goto yy5;
	default:	goto yy3;
	}
yy3:
#line 53 "cvsignore.re"
	{ output[outsize++] = cursor[-1]; if (cursor >= limit) break; goto loop; }
#line 65 "cvsignore.c"
yy4:
	yych = *++YYCURSOR;
	goto yy3;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy44;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy32;
	default:	goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy25;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy19;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy11;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy12;
	default:	goto yy6;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy13;
	default:	goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy15;
	case ':':	goto yy14;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy18;
	}
yy15:
	++YYCURSOR;
#line 48 "cvsignore.re"
	{ APPEND(L"$" L"Date$"); goto loop; }
#line 131 "cvsignore.c"
yy17:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy18:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy15;
	default:	goto yy17;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy21;
	case ':':	goto yy20;
	default:	goto yy6;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy24;
	}
yy21:
	++YYCURSOR;
#line 49 "cvsignore.re"
	{ APPEND(L"$" L"Id$"); goto loop; }
#line 159 "cvsignore.c"
yy23:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy24:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy21;
	default:	goto yy23;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'g':	goto yy26;
	default:	goto yy6;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy28;
	case ':':	goto yy27;
	default:	goto yy6;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy31;
	}
yy28:
	++YYCURSOR;
#line 50 "cvsignore.re"
	{ APPEND(L"$" L"Log$"); goto loop; }
#line 193 "cvsignore.c"
yy30:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy31:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy28;
	default:	goto yy30;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'v':	goto yy33;
	default:	goto yy6;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy34;
	default:	goto yy6;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy35;
	default:	goto yy6;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy36;
	default:	goto yy6;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy37;
	default:	goto yy6;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy38;
	default:	goto yy6;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy40;
	case ':':	goto yy39;
	default:	goto yy6;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy43;
	}
yy40:
	++YYCURSOR;
#line 51 "cvsignore.re"
	{ APPEND(L"$" L"Revision$"); goto loop; }
#line 257 "cvsignore.c"
yy42:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy43:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy40;
	default:	goto yy42;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy45;
	default:	goto yy6;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy46;
	default:	goto yy6;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy47;
	default:	goto yy6;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy48;
	default:	goto yy6;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy50;
	case ':':	goto yy49;
	default:	goto yy6;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case '$':	goto yy6;
	default:	goto yy53;
	}
yy50:
	++YYCURSOR;
#line 52 "cvsignore.re"
	{ APPEND(L"$" L"Source$"); goto loop; }
#line 309 "cvsignore.c"
yy52:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy53:
	switch (yych) {
	case '\n':	goto yy6;
	case '$':	goto yy50;
	default:	goto yy52;
	}
}
#line 55 "cvsignore.re"

	}
	output[outsize] = '\0';

	// set the new size
	*pSize = outsize;
	
	*pbChanged = (insize == outsize) ? 0 : 1;
}
