/* Generated by re2c */
#line 1 "config9.b.re"
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

void fill(int)
{
}

int scan(Scanner &s)
{
	char *cursor = s.cur;

	if(cursor == s.lim)
		return EOI;
	
std:
	s.tok = cursor;


#line 46 "config9.b.c"
{
	unsigned char curr;
	static const unsigned char yybm[] = {
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
	};
	if ((s.lim - s.cur) < 3) fill(3);
	curr = (unsigned char)*s.cur;
	if (curr <= ' ') {
		if (curr <= '\t') {
			if (curr <= 0x08) goto xx9;
			goto xx6;
		} else {
			if (curr <= '\n') goto xx8;
			if (curr <= 0x1F) goto xx9;
			goto xx6;
		}
	} else {
		if (curr <= '9') {
			if (curr <= '/') goto xx9;
			goto xx4;
		} else {
			if (curr <= '`') goto xx9;
			if (curr >= 'c') goto xx9;
		}
	}
	++s.cur;
	s.ctx = s.cur;
	if ((curr = (unsigned char)*s.cur) <= '/') goto xx3;
	if (curr == '1') goto xx15;
	if (curr <= '9') goto xx12;
xx3:
#line 68 "config9.b.re"
	{
		return UNEXPECTED;
	}
#line 113 "config9.b.c"
xx4:
	++s.cur;
	curr = (unsigned char)*s.cur;
	goto xx11;
xx5:
#line 58 "config9.b.re"
	{ return NUMBER;  }
#line 121 "config9.b.c"
xx6:
	++s.cur;
xx7:
#line 61 "config9.b.re"
	{
		if(s.cur == s.lim)
			return EOI;
		cursor = s.cur;
		goto std;
	}
#line 132 "config9.b.c"
xx8:
	curr = (unsigned char)*++s.cur;
	goto xx7;
xx9:
	curr = (unsigned char)*++s.cur;
	goto xx3;
xx10:
	++s.cur;
	if (s.lim <= s.cur) fill(1);
	curr = (unsigned char)*s.cur;
xx11:
	if (yybm[0+curr] & 128) {
		goto xx10;
	}
	goto xx5;
xx12:
	++s.cur;
	if (s.lim <= s.cur) fill(1);
	curr = (unsigned char)*s.cur;
	if (curr <= '/') goto xx14;
	if (curr <= '9') goto xx12;
xx14:
	s.cur = s.ctx;
#line 57 "config9.b.re"
	{ return KEYWORD; }
#line 158 "config9.b.c"
xx15:
	++s.cur;
	if ((curr = (unsigned char)*s.cur) <= '/') goto xx16;
	if (curr <= '9') goto xx12;
xx16:
	s.cur = s.ctx;
#line 56 "config9.b.re"
	{ return KEYWORD; }
#line 167 "config9.b.c"
}
#line 71 "config9.b.re"

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
