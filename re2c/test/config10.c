/* Generated by re2c */
#line 1 "config10.re"
#include <cstring>
#include <iostream>

struct Scanner
{
	Scanner(char *txt)
		: cur(txt), lim(txt + strlen(txt))
	{
	}
	
	char    *cur;
	char    *lim;
	char	*ptr;
	char	*ctx;
	char    *tok;
};

enum What
{
	UNEXPECTED,
	KEYWORD,
	NUMBER,
	EOI
};

char * tokens[] = { "UNEXPECTED", "KEYWORD", "NUMBER", "EOI" };

void fill()
{
}

int scan(Scanner &s)
{
	char *cursor = s.cur;

	if(cursor == s.lim)
		return EOI;
	
std:
	s.tok = cursor;


#line 46 "config10.c"
{
	char curr;
	if ((s.lim - s.cur) < 3) fill();
	curr = *s.cur;
	switch (curr) {
	case '\t':
	case ' ':	goto xx6;
	case '\n':	goto xx8;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx4;
	case 'a':
	case 'b':	goto xx2;
	default:	goto xx9;
	}
xx2:
	++s.cur;
	s.ctx = s.cur;
	switch ((curr = *s.cur)) {
	case '0':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx12;
	case '1':	goto xx15;
	default:	goto xx3;
	}
xx3:
#line 67 "config10.re"
	{
		return UNEXPECTED;
	}
#line 90 "config10.c"
xx4:
	++s.cur;
	curr = *s.cur;
	goto xx11;
xx5:
#line 57 "config10.re"
	{ return NUMBER;  }
#line 98 "config10.c"
xx6:
	++s.cur;
xx7:
#line 60 "config10.re"
	{
		if(s.cur == s.lim)
			return EOI;
		cursor = s.cur;
		goto std;
	}
#line 109 "config10.c"
xx8:
	curr = *++s.cur;
	goto xx7;
xx9:
	curr = *++s.cur;
	goto xx3;
xx10:
	++s.cur;
	if (s.lim <= s.cur) fill();
	curr = *s.cur;
xx11:
	switch (curr) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx10;
	default:	goto xx5;
	}
xx12:
	++s.cur;
	if (s.lim <= s.cur) fill();
	curr = *s.cur;
	switch (curr) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx12;
	default:	goto xx14;
	}
xx14:
	s.cur = s.ctx;
#line 56 "config10.re"
	{ return KEYWORD; }
#line 155 "config10.c"
xx15:
	++s.cur;
	switch ((curr = *s.cur)) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx12;
	default:	goto xx16;
	}
xx16:
	s.cur = s.ctx;
#line 55 "config10.re"
	{ return KEYWORD; }
#line 175 "config10.c"
}
#line 70 "config10.re"

}

int main(int,char**)
{
	Scanner s("a77 a1 b8 b1");
	
	int t, n = 0;
	while ((t = scan(s)) != EOI)
	{
		std::cout << (++n) << ": " << tokens[t] << " = \""; std::cout.write(s.tok, s.cur-s.tok); std::cout << "\"" << std::endl;
	}
}
