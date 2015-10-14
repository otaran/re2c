re2c: warning: line 11: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 11: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 11: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
/* Generated by re2c */
#line 1 "condtype.cs.re"
int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 10 "condtype.cs.c"
{
	unsigned char yych;
	if (YYGETCONDITION() < 1) {
		goto yyc_a;
	} else {
		goto yyc_b;
	}
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy4;
yy4:
	++YYCURSOR;
#line 9 "condtype.cs.re"
	{}
#line 26 "condtype.cs.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy9;
yy9:
	++YYCURSOR;
#line 10 "condtype.cs.re"
	{}
#line 35 "condtype.cs.c"
}
#line 11 "condtype.cs.re"

	return 0;
}
