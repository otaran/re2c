/* Generated by re2c */
#line 1 "default_full.x--encoding-policy(fail).re"

#line 5 "default_full.x--encoding-policy(fail).c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= 0xD7FF) goto yy2;
	if (yych <= 0xDBFF) goto yy4;
	if (yych <= 0xDFFF) goto yy6;
yy2:
	++YYCURSOR;
yy3:
#line 3 "default_full.x--encoding-policy(fail).re"
	{ return FULL; }
#line 18 "default_full.x--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy5;
	if (yych <= 0xDFFF) goto yy7;
yy5:
#line 2 "default_full.x--encoding-policy(fail).re"
	{ return DEFAULT; }
#line 26 "default_full.x--encoding-policy(fail).c"
yy6:
	yych = *++YYCURSOR;
	goto yy5;
yy7:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy3;
}
#line 4 "default_full.x--encoding-policy(fail).re"

