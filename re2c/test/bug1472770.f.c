/* Generated by re2c */
#line 1 "bug1472770.f.re"
#define NULL ((char*) 0)
#define YYCTYPE char
#define YYCURSOR p
#define YYLIMIT p
#define YYMARKER q
#define YYFILL(n)

YYCTYPE yych;
int yySavedState;

#define YYGETSTATE()	yySavedState
#define YYSETSTATE(n)	yySavedState = n;

#include <stdio.h>

int scan(char *p)
{
	int n = 0;
	char *q;
	
	printf("[--------------\n");
	printf("%s\n", p);
	printf("]--------------\n");
start:

#line 29 "bug1472770.f.c"

	switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	}
	goto yy0;
yy1:
	++YYCURSOR;
yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy5;
	case '\n':	goto yy3;
	default:	goto yy1;
	}
yy3:
	++YYCURSOR;
#line 27 "bug1472770.f.re"
	{
		++n;
		goto start;
	}
#line 55 "bug1472770.f.c"
yy5:
	++YYCURSOR;
#line 32 "bug1472770.f.re"
	{
		return n;
	}
#line 62 "bug1472770.f.c"
#line 35 "bug1472770.f.re"

}

int main(int argc, char **argv)
{
	int n = 0;
	char *largv[4];

	if (argc < 2)
	{
		argc = 4;
		argv = largv;
		argv[1] = "";
		argv[2] = "1\n\n";
		argv[3] = "1\n2\n";
	}
	while(++n < argc)
	{
		printf("%d\n", scan(argv[n]));
	}
	return 0;
}
