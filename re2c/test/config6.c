/* Generated by re2c */
#line 1 "config6.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scan(char *s)
{
	char *p = s;

	#define YYCTYPE         char
	#define YYCURSOR        p
	
	for(;;)
	{

#line 18 "config6.c"
		{
			YYCTYPE yych;
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy10;
			case '+':	goto yy6;
			case '-':	goto yy8;
			case '0':	goto yy2;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy4;
			default:	goto yy12;
			}
yy2:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy16;
			default:	goto yy3;
			}
yy3:
#line 20 "config6.re"
			{ printf("Num\n");	continue; }
#line 56 "config6.c"
yy4:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy15;
yy5:
#line 19 "config6.re"
			{ printf("Num\n");	continue; }
#line 64 "config6.c"
yy6:
			++YYCURSOR;
#line 21 "config6.re"
			{ printf("+\n");	continue; }
#line 69 "config6.c"
yy8:
			++YYCURSOR;
#line 22 "config6.re"
			{ printf("-\n");	continue; }
#line 74 "config6.c"
yy10:
			++YYCURSOR;
#line 23 "config6.re"
			{ printf("EOF\n");	return 0; }
#line 79 "config6.c"
yy12:
			++YYCURSOR;
#line 24 "config6.re"
			{ printf("ERR\n");	return 1; }
#line 84 "config6.c"
yy14:
			++YYCURSOR;
			yych = *YYCURSOR;
yy15:
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy14;
			default:	goto yy5;
			}
yy16:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy16;
			default:	goto yy18;
			}
yy18:
#line 18 "config6.re"
			{ printf("Oct\n");	continue; }
#line 121 "config6.c"
		}
#line 25 "config6.re"

	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(argv[1]);
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
