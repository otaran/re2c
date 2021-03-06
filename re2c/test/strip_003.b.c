/* Generated by re2c */
#line 1 "strip_003.b.re"
/* re2c lesson 002_strip_comments, strip_003.b, (c) M. Boerger 2006 - 2007 */
#line 37 "strip_003.b.re"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 4
#define	BSIZE	128

#if BSIZE < YYMAXFILL
# error BSIZE must be greater YYMAXFILL
#endif

#define	YYCTYPE		unsigned char
#define	YYCURSOR	s.cur
#define	YYLIMIT		s.lim
#define YYMARKER	s.mrk
#define YYCTXMARKER s.ctx
#define	YYFILL(n)	{ if ((res = fill(&s, n)) >= 0) break; }

typedef struct Scanner
{
	FILE			*fp;
	unsigned char	*cur, *tok, *lim, *eof, *ctx, *mrk;
	unsigned char 	buffer[BSIZE];
} Scanner;

int fill(Scanner *s, int len)
{
	if (!len)
	{
		s->cur = s->tok = s->lim = s->mrk = s->buffer;
		s->eof = 0;
	}
	if (!s->eof)
	{
		int got, cnt = s->tok - s->buffer;

		if (cnt > 0)
		{
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			s->mrk -= cnt;
			s->ctx -= cnt;
		}
		cnt = BSIZE - cnt;
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	else if (s->cur + len > s->eof)
	{
		return 0; /* not enough input data */
	}
	return -1;
}

void echo(Scanner *s)
{
	fwrite(s->tok, 1, s->cur - s->tok, stdout);
}

int scan(FILE *fp)
{
	int  res = 0;
	int  nlcomment = 0;
    Scanner s;

	if (!fp)
	{
		return 1; /* no file was opened */
	}

    s.fp = fp;
	
	fill(&s, 0);

	for(;;)
	{
		s.tok = s.cur;

#line 90 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
			yych = *YYCURSOR;
			if (yych <= '\f') {
				if (yych == '\n') goto yy5;
				goto yy6;
			} else {
				if (yych <= '\r') goto yy4;
				if (yych != '/') goto yy6;
			}
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '*') goto yy12;
			if (yych == '/') goto yy14;
yy3:
#line 130 "strip_003.b.re"
			{ fputc(*s.tok, stdout); continue; }
#line 108 "strip_003.b.c"
yy4:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych == '\n') goto yy11;
			goto yy3;
yy5:
			yych = *(YYMARKER = ++YYCURSOR);
			YYCTXMARKER = YYCURSOR;
			if (yych == '/') goto yy7;
			goto yy3;
yy6:
			yych = *++YYCURSOR;
			goto yy3;
yy7:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy9;
yy8:
			YYCURSOR = YYMARKER;
			goto yy3;
yy9:
			++YYCURSOR;
			YYCURSOR = YYCTXMARKER;
#line 128 "strip_003.b.re"
			{ echo(&s); nlcomment = 1; continue; }
#line 132 "strip_003.b.c"
yy11:
			yych = *++YYCURSOR;
			YYCTXMARKER = YYCURSOR;
			if (yych == '/') goto yy7;
			goto yy8;
yy12:
			++YYCURSOR;
#line 129 "strip_003.b.re"
			{ goto comment; }
#line 142 "strip_003.b.c"
yy14:
			++YYCURSOR;
#line 127 "strip_003.b.re"
			{ goto cppcomment; }
#line 147 "strip_003.b.c"
		}
#line 131 "strip_003.b.re"

comment:
		s.tok = s.cur;

#line 154 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych != '*') goto yy20;
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '/') goto yy21;
yy19:
#line 136 "strip_003.b.re"
			{ goto comment; }
#line 165 "strip_003.b.c"
yy20:
			yych = *++YYCURSOR;
			goto yy19;
yy21:
			++YYCURSOR;
#line 135 "strip_003.b.re"
			{ goto commentws; }
#line 173 "strip_003.b.c"
		}
#line 137 "strip_003.b.re"

commentws:
		s.tok = s.cur;

#line 180 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
			yych = *YYCURSOR;
			if (yych <= '\r') {
				if (yych <= '\t') {
					if (yych <= 0x08) goto yy32;
					goto yy31;
				} else {
					if (yych <= '\n') goto yy27;
					if (yych <= '\f') goto yy32;
				}
			} else {
				if (yych <= ' ') {
					if (yych <= 0x1F) goto yy32;
					goto yy31;
				} else {
					if (yych == '/') goto yy29;
					goto yy32;
				}
			}
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '\n') goto yy37;
yy26:
#line 150 "strip_003.b.re"
			{ goto commentws; }
#line 207 "strip_003.b.c"
yy27:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych == '/') goto yy35;
yy28:
#line 142 "strip_003.b.re"
			{
					if (!nlcomment)
					{
						echo(&s);
					}
					nlcomment = 0;
					continue;
				}
#line 221 "strip_003.b.c"
yy29:
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '*') goto yy33;
yy30:
#line 151 "strip_003.b.re"
			{ echo(&s); nlcomment = 0; continue; }
#line 228 "strip_003.b.c"
yy31:
			yych = *++YYCURSOR;
			goto yy26;
yy32:
			yych = *++YYCURSOR;
			goto yy30;
yy33:
			++YYCURSOR;
#line 141 "strip_003.b.re"
			{ goto comment; }
#line 239 "strip_003.b.c"
yy35:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy33;
			YYCURSOR = YYMARKER;
			goto yy28;
yy37:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych == '/') goto yy35;
			goto yy28;
		}
#line 152 "strip_003.b.re"

cppcomment:
		s.tok = s.cur;

#line 255 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '\n') goto yy42;
			if (yych != '\r') goto yy44;
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '\n') goto yy45;
yy41:
#line 157 "strip_003.b.re"
			{ goto cppcomment; }
#line 267 "strip_003.b.c"
yy42:
			++YYCURSOR;
yy43:
#line 156 "strip_003.b.re"
			{ echo(&s); continue; }
#line 273 "strip_003.b.c"
yy44:
			yych = *++YYCURSOR;
			goto yy41;
yy45:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy43;
		}
#line 158 "strip_003.b.re"

	}

	if (fp != stdin)
	{
		fclose(fp); /* close only if not stdin */
	}
	return res; /* return result */
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(!strcmp(argv[1], "-") ? stdin : fopen(argv[1], "r"));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
