/* Generated by re2c */

digraph re2c {

0 -> INITIAL [label="state=INITIAL"]
0 -> ST_OFFSET [label="state=ST_OFFSET"]
0 -> ST_SECTION_VALUE [label="state=ST_SECTION_VALUE"]
0 -> ST_VALUE [label="state=ST_VALUE"]
0 -> ST_SECTION_RAW [label="state=ST_SECTION_RAW"]
0 -> ST_DOUBLE_QUOTES [label="state=ST_DOUBLE_QUOTES"]
0 -> ST_VARNAME [label="state=ST_VARNAME"]
0 -> ST_RAW [label="state=ST_RAW"]
/* *********************************** */
INITIAL -> 2
2 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][0-9][A-E][G-M][P-S][U-X][Z][\\][_-e][g-m][p-s][u-x][z][0x7F-0xFF]"]
2 -> 5 [label="[0x09]"]
2 -> 7 [label="[0x0A]"]
2 -> 9 [label="[0x0D]"]
2 -> 10 [label="[ ]"]
2 -> 11 [label="[!-\"][$][&][(-)][^][{-~]"]
2 -> 13 [label="[%]['][*-/][:][<][>-@][0x5D]"]
2 -> 14 [label="[;]"]
2 -> 16 [label="[=]"]
2 -> 18 [label="[F][f]"]
2 -> 19 [label="[N][n]"]
2 -> 20 [label="[O][o]"]
2 -> 21 [label="[T][t]"]
2 -> 22 [label="[Y][y]"]
2 -> 23 [label="[[]"]
3 -> 26
4 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:481"]
5 -> 64
6 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
7 -> 8
8 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:632"]
9 -> 8 [label="[0x00-0x09][0x0B-0xFF]"]
9 -> 67 [label="[0x0A]"]
10 -> 26 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<][>-0xFF]"]
10 -> 63 [label="[0x09]"]
10 -> 67 [label="[0x0A]"]
10 -> 68 [label="[0x0D]"]
10 -> 65 [label="[ ]"]
10 -> 58 [label="[;]"]
10 -> 56 [label="[=]"]
11 -> 12
12 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:555"]
13 -> 26
14 -> 59
15 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
16 -> 57
17 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:491"]
18 -> 26 [label="[0x00-@][B-`][b-0xFF]"]
18 -> 53 [label="[A][a]"]
19 -> 26 [label="[0x00-N][P-T][V-n][p-t][v-0xFF]"]
19 -> 44 [label="[O][o]"]
19 -> 45 [label="[U][u]"]
20 -> 26 [label="[0x00-E][G-M][O-e][g-m][o-0xFF]"]
20 -> 38 [label="[F][f]"]
20 -> 31 [label="[N][n]"]
21 -> 26 [label="[0x00-Q][S-q][s-0xFF]"]
21 -> 36 [label="[R][r]"]
22 -> 26 [label="[0x00-D][F-d][f-0xFF]"]
22 -> 27 [label="[E][e]"]
23 -> 24
24 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:406"]
25 -> 26
26 -> 25 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
26 -> 4 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
26 -> 28 [label="[[]"]
27 -> 26 [label="[0x00-R][T-r][t-0xFF]"]
27 -> 31 [label="[S][s]"]
28 -> 29
29 -> 30 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
29 -> 28 [label="[0x09][ ]"]
30 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:431"]
31 -> 32
32 -> 25 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
32 -> 34 [label="[0x09]"]
32 -> 33 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
32 -> 31 [label="[ ]"]
32 -> 28 [label="[[]"]
33 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
34 -> 35
35 -> 33 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
35 -> 34 [label="[0x09][ ]"]
36 -> 26 [label="[0x00-T][V-t][v-0xFF]"]
36 -> 37 [label="[U][u]"]
37 -> 26 [label="[0x00-D][F-d][f-0xFF]"]
37 -> 31 [label="[E][e]"]
38 -> 26 [label="[0x00-E][G-e][g-0xFF]"]
38 -> 39 [label="[F][f]"]
39 -> 40
40 -> 25 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
40 -> 42 [label="[0x09]"]
40 -> 41 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
40 -> 39 [label="[ ]"]
40 -> 28 [label="[[]"]
41 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
42 -> 43
43 -> 41 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
43 -> 42 [label="[0x09][ ]"]
44 -> 26 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-M][O-0x5D][_-m][o-z][0x7F-0xFF]"]
44 -> 42 [label="[0x09]"]
44 -> 41 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
44 -> 39 [label="[ ]"]
44 -> 52 [label="[N][n]"]
45 -> 26 [label="[0x00-K][M-k][m-0xFF]"]
45 -> 46 [label="[L][l]"]
46 -> 26 [label="[0x00-K][M-k][m-0xFF]"]
46 -> 47 [label="[L][l]"]
47 -> 48
48 -> 25 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
48 -> 50 [label="[0x09]"]
48 -> 49 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
48 -> 47 [label="[ ]"]
48 -> 28 [label="[[]"]
49 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
50 -> 51
51 -> 49 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
51 -> 50 [label="[0x09][ ]"]
52 -> 26 [label="[0x00-D][F-d][f-0xFF]"]
52 -> 39 [label="[E][e]"]
53 -> 26 [label="[0x00-K][M-k][m-0xFF]"]
53 -> 54 [label="[L][l]"]
54 -> 26 [label="[0x00-R][T-r][t-0xFF]"]
54 -> 55 [label="[S][s]"]
55 -> 26 [label="[0x00-D][F-d][f-0xFF]"]
55 -> 39 [label="[E][e]"]
56 -> 57
57 -> 17 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
57 -> 56 [label="[0x09][ ]"]
58 -> 59
59 -> 58 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
59 -> 60 [label="[0x0A]"]
59 -> 62 [label="[0x0D]"]
60 -> 61
61 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
62 -> 61 [label="[0x00-0x09][0x0B-0xFF]"]
62 -> 60 [label="[0x0A]"]
63 -> 64
64 -> 6 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<][>-0xFF]"]
64 -> 63 [label="[0x09][ ]"]
64 -> 67 [label="[0x0A]"]
64 -> 68 [label="[0x0D]"]
64 -> 58 [label="[;]"]
64 -> 56 [label="[=]"]
65 -> 66
66 -> 25 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
66 -> 63 [label="[0x09]"]
66 -> 67 [label="[0x0A]"]
66 -> 68 [label="[0x0D]"]
66 -> 65 [label="[ ]"]
66 -> 4 [label="[!-\"][$][&][(-)][^][{-~]"]
66 -> 58 [label="[;]"]
66 -> 56 [label="[=]"]
66 -> 28 [label="[[]"]
67 -> 8
68 -> 8 [label="[0x00-0x09][0x0B-0xFF]"]
68 -> 67 [label="[0x0A]"]
/* *********************************** */
ST_DOUBLE_QUOTES -> 70
70 -> 71 [label="[0x00-!][#][%-0xFF]"]
70 -> 73 [label="[\"]"]
70 -> 75 [label="[$]"]
71 -> 72
72 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:587"]
73 -> 79
74 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:582"]
75 -> 72 [label="[0x00-z][|-0xFF]"]
75 -> 76 [label="[{]"]
76 -> 77
77 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
78 -> 79
79 -> 74 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
79 -> 78 [label="[0x09][ ]"]
/* *********************************** */
ST_OFFSET -> 81
81 -> 82 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
81 -> 84 [label="[0x09][ ]"]
81 -> 85 [label="[0x0A][0x0D][;]"]
81 -> 87 [label="[\"]"]
81 -> 89 [label="[$]"]
81 -> 90 [label="[']"]
81 -> 91 [label="[-]"]
81 -> 92 [label="[.]"]
81 -> 93 [label="[0-9]"]
81 -> 95 [label="[A-Z][_][a-z]"]
81 -> 97 [label="[\\]"]
81 -> 98 [label="[0x5D]"]
82 -> 101
83 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
84 -> 101 [label="[0x00-0x08][0x0A-0x1F][!][#-\\][^-0xFF]"]
84 -> 127 [label="[0x09][ ]"]
84 -> 129 [label="[\"]"]
84 -> 130 [label="[0x5D]"]
85 -> 86
86 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
87 -> 88
88 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
89 -> 86 [label="[0x00]"]
89 -> 100 [label="[0x01-[][0x5D-z][|-0xFF]"]
89 -> 105 [label="[\\]"]
89 -> 125 [label="[{]"]
90 -> 121 [label="[0x00-&][(-0xFF]"]
90 -> 86 [label="[']"]
91 -> 101 [label="[0x00-/][:-0xFF]"]
91 -> 119 [label="[0-9]"]
92 -> 101 [label="[0x00-/][:-0xFF]"]
92 -> 117 [label="[0-9]"]
93 -> 101 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#-&][(--][/][:][<-\\][^-0xFF]"]
93 -> 94 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
93 -> 113 [label="[.]"]
93 -> 115 [label="[0-9]"]
94 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
95 -> 101 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#-&][(-/][:][<-@][[-\\][^][`][{-0xFF]"]
95 -> 96 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
95 -> 111 [label="[0-9][A-Z][_][a-z]"]
96 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
97 -> 100
98 -> 99
99 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:444"]
100 -> 101
101 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
101 -> 83 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
101 -> 103 [label="[$]"]
101 -> 102 [label="[\\]"]
102 -> 100
103 -> 104 [label="[0x00][{]"]
103 -> 100 [label="[0x01-[][0x5D-z][|-0xFF]"]
103 -> 105 [label="[\\]"]
104 -> 83 [label="yyaccept=0"]
104 -> 86 [label="yyaccept=1"]
104 -> 94 [label="yyaccept=2"]
104 -> 96 [label="yyaccept=3"]
105 -> 100 [label="[0x00-#][%-[][0x5D-0xFF]"]
105 -> 106 [label="[$]"]
105 -> 108 [label="[\\]"]
106 -> 107
107 -> 100 [label="[0x00-#][%-[][0x5D-0xFF]"]
107 -> 106 [label="[$]"]
107 -> 110 [label="[\\]"]
108 -> 109
109 -> 100 [label="[0x00-#][%-[][0x5D-0xFF]"]
109 -> 106 [label="[$]"]
109 -> 108 [label="[\\]"]
110 -> 100 [label="[0x00-#][%-[][0x5D-0xFF]"]
110 -> 106 [label="[$]"]
110 -> 108 [label="[\\]"]
111 -> 112
112 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
112 -> 96 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
112 -> 103 [label="[$]"]
112 -> 111 [label="[0-9][A-Z][_][a-z]"]
112 -> 102 [label="[\\]"]
113 -> 114
114 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
114 -> 94 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
114 -> 103 [label="[$]"]
114 -> 113 [label="[0-9]"]
114 -> 102 [label="[\\]"]
115 -> 116
116 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
116 -> 94 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
116 -> 103 [label="[$]"]
116 -> 113 [label="[.]"]
116 -> 115 [label="[0-9]"]
116 -> 102 [label="[\\]"]
117 -> 118
118 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
118 -> 94 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
118 -> 103 [label="[$]"]
118 -> 117 [label="[0-9]"]
118 -> 102 [label="[\\]"]
119 -> 120
120 -> 100 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
120 -> 94 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
120 -> 103 [label="[$]"]
120 -> 119 [label="[0-9]"]
120 -> 102 [label="[\\]"]
121 -> 122
122 -> 121 [label="[0x00-&][(-0xFF]"]
122 -> 123 [label="[']"]
123 -> 124
124 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
125 -> 126
126 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
127 -> 128
128 -> 100 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
128 -> 127 [label="[0x09][ ]"]
128 -> 83 [label="[0x0A][0x0D]['][;]"]
128 -> 129 [label="[\"]"]
128 -> 103 [label="[$]"]
128 -> 102 [label="[\\]"]
128 -> 130 [label="[0x5D]"]
129 -> 88
130 -> 99
/* *********************************** */
ST_RAW -> 132
132 -> 133 [label="[0x00]"]
132 -> 135 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
132 -> 137 [label="[0x09][ ]"]
132 -> 138 [label="[0x0A]"]
132 -> 140 [label="[0x0D]"]
132 -> 141 [label="[;]"]
133 -> 134
134 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
135 -> 136
136 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:500"]
137 -> 136 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
137 -> 149 [label="[0x09-0x0A][0x0D][ ][;]"]
138 -> 139
139 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
140 -> 139 [label="[0x00-0x09][0x0B-0xFF]"]
140 -> 147 [label="[0x0A]"]
141 -> 143
142 -> 143
143 -> 142 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
143 -> 144 [label="[0x0A]"]
143 -> 146 [label="[0x0D]"]
144 -> 145
145 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
146 -> 145 [label="[0x00-0x09][0x0B-0xFF]"]
146 -> 144 [label="[0x0A]"]
147 -> 139
148 -> 149
149 -> 150 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
149 -> 148 [label="[0x09][ ]"]
149 -> 147 [label="[0x0A]"]
149 -> 151 [label="[0x0D]"]
149 -> 142 [label="[;]"]
150 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
151 -> 139 [label="[0x00-0x09][0x0B-0xFF]"]
151 -> 147 [label="[0x0A]"]
/* *********************************** */
ST_SECTION_RAW -> 153
153 -> 154 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
153 -> 156 [label="[0x0A][0x0D]"]
153 -> 158 [label="[0x5D]"]
154 -> 165
155 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:537"]
156 -> 157
157 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
158 -> 161
159 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
160 -> 161
161 -> 159 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
161 -> 160 [label="[0x09][ ]"]
161 -> 162 [label="[0x0A]"]
161 -> 163 [label="[0x0D]"]
162 -> 159
163 -> 159 [label="[0x00-0x09][0x0B-0xFF]"]
163 -> 162 [label="[0x0A]"]
164 -> 165
165 -> 164 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
165 -> 155 [label="[0x0A][0x0D][0x5D]"]
/* *********************************** */
ST_SECTION_VALUE -> 167
167 -> 168 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
167 -> 170 [label="[0x09][ ]"]
167 -> 171 [label="[0x0A][0x0D][;]"]
167 -> 173 [label="[\"]"]
167 -> 175 [label="[$]"]
167 -> 176 [label="[']"]
167 -> 177 [label="[-]"]
167 -> 178 [label="[.]"]
167 -> 179 [label="[0-9]"]
167 -> 181 [label="[A-Z][_][a-z]"]
167 -> 183 [label="[\\]"]
167 -> 184 [label="[0x5D]"]
168 -> 191
169 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
170 -> 191 [label="[0x00-0x08][0x0A-0x1F][!][#-0xFF]"]
170 -> 217 [label="[0x09][ ]"]
170 -> 219 [label="[\"]"]
171 -> 172
172 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
173 -> 174
174 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
175 -> 172 [label="[0x00]"]
175 -> 190 [label="[0x01-[][0x5D-z][|-0xFF]"]
175 -> 195 [label="[\\]"]
175 -> 215 [label="[{]"]
176 -> 211 [label="[0x00-&][(-0xFF]"]
176 -> 172 [label="[']"]
177 -> 191 [label="[0x00-/][:-0xFF]"]
177 -> 209 [label="[0-9]"]
178 -> 191 [label="[0x00-/][:-0xFF]"]
178 -> 207 [label="[0-9]"]
179 -> 191 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#-&][(--][/][:][<-\\][^-0xFF]"]
179 -> 180 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
179 -> 203 [label="[.]"]
179 -> 205 [label="[0-9]"]
180 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
181 -> 191 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#-&][(-/][:][<-@][[-\\][^][`][{-0xFF]"]
181 -> 182 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
181 -> 201 [label="[0-9][A-Z][_][a-z]"]
182 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
183 -> 190
184 -> 187
185 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
186 -> 187
187 -> 185 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
187 -> 186 [label="[0x09][ ]"]
187 -> 188 [label="[0x0A]"]
187 -> 189 [label="[0x0D]"]
188 -> 185
189 -> 185 [label="[0x00-0x09][0x0B-0xFF]"]
189 -> 188 [label="[0x0A]"]
190 -> 191
191 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
191 -> 169 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
191 -> 193 [label="[$]"]
191 -> 192 [label="[\\]"]
192 -> 190
193 -> 194 [label="[0x00][{]"]
193 -> 190 [label="[0x01-[][0x5D-z][|-0xFF]"]
193 -> 195 [label="[\\]"]
194 -> 169 [label="yyaccept=0"]
194 -> 172 [label="yyaccept=1"]
194 -> 180 [label="yyaccept=2"]
194 -> 182 [label="yyaccept=3"]
195 -> 190 [label="[0x00-#][%-[][0x5D-0xFF]"]
195 -> 196 [label="[$]"]
195 -> 198 [label="[\\]"]
196 -> 197
197 -> 190 [label="[0x00-#][%-[][0x5D-0xFF]"]
197 -> 196 [label="[$]"]
197 -> 200 [label="[\\]"]
198 -> 199
199 -> 190 [label="[0x00-#][%-[][0x5D-0xFF]"]
199 -> 196 [label="[$]"]
199 -> 198 [label="[\\]"]
200 -> 190 [label="[0x00-#][%-[][0x5D-0xFF]"]
200 -> 196 [label="[$]"]
200 -> 198 [label="[\\]"]
201 -> 202
202 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
202 -> 182 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
202 -> 193 [label="[$]"]
202 -> 201 [label="[0-9][A-Z][_][a-z]"]
202 -> 192 [label="[\\]"]
203 -> 204
204 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
204 -> 180 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
204 -> 193 [label="[$]"]
204 -> 203 [label="[0-9]"]
204 -> 192 [label="[\\]"]
205 -> 206
206 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
206 -> 180 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
206 -> 193 [label="[$]"]
206 -> 203 [label="[.]"]
206 -> 205 [label="[0-9]"]
206 -> 192 [label="[\\]"]
207 -> 208
208 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
208 -> 180 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
208 -> 193 [label="[$]"]
208 -> 207 [label="[0-9]"]
208 -> 192 [label="[\\]"]
209 -> 210
210 -> 190 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
210 -> 180 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
210 -> 193 [label="[$]"]
210 -> 209 [label="[0-9]"]
210 -> 192 [label="[\\]"]
211 -> 212
212 -> 211 [label="[0x00-&][(-0xFF]"]
212 -> 213 [label="[']"]
213 -> 214
214 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
215 -> 216
216 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
217 -> 218
218 -> 190 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
218 -> 217 [label="[0x09][ ]"]
218 -> 169 [label="[0x0A][0x0D]['][;][0x5D]"]
218 -> 219 [label="[\"]"]
218 -> 193 [label="[$]"]
218 -> 192 [label="[\\]"]
219 -> 174
/* *********************************** */
ST_VALUE -> 221
221 -> 222 [label="[0x00]"]
221 -> 224 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-,][/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
221 -> 226 [label="[0x09][ ]"]
221 -> 228 [label="[0x0A]"]
221 -> 230 [label="[0x0D]"]
221 -> 231 [label="[!][&][(-)][^][|][~]"]
221 -> 233 [label="[\"]"]
221 -> 235 [label="[$]"]
221 -> 236 [label="[']"]
221 -> 237 [label="[-]"]
221 -> 238 [label="[.]"]
221 -> 239 [label="[0-9]"]
221 -> 241 [label="[;]"]
221 -> 242 [label="[=]"]
221 -> 244 [label="[A-E][G-M][P-S][U-X][Z][_][a-e][g-m][p-s][u-x][z]"]
221 -> 246 [label="[F][f]"]
221 -> 247 [label="[N][n]"]
221 -> 248 [label="[O][o]"]
221 -> 249 [label="[T][t]"]
221 -> 250 [label="[Y][y]"]
222 -> 223
223 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
224 -> 252
225 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:569"]
226 -> 306
227 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:623"]
228 -> 229
229 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
230 -> 229 [label="[0x00-0x09][0x0B-0xFF]"]
230 -> 304 [label="[0x0A]"]
231 -> 303
232 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:559"]
233 -> 234
234 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
235 -> 223 [label="[0x00]"]
235 -> 251 [label="[0x01-[][0x5D-z][|-0xFF]"]
235 -> 258 [label="[\\]"]
235 -> 300 [label="[{]"]
236 -> 296 [label="[0x00-&][(-0xFF]"]
236 -> 223 [label="[']"]
237 -> 252 [label="[0x00-/][:-0xFF]"]
237 -> 294 [label="[0-9]"]
238 -> 252 [label="[0x00-/][:-0xFF]"]
238 -> 292 [label="[0-9]"]
239 -> 240 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
239 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*--][/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
239 -> 288 [label="[.]"]
239 -> 290 [label="[0-9]"]
240 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
241 -> 284
242 -> 243
243 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:563"]
244 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
244 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
244 -> 253 [label="[0-9][A-Z][_][a-z]"]
245 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
246 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
246 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
246 -> 253 [label="[0-9][B-Z][_][b-z]"]
246 -> 280 [label="[A][a]"]
247 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
247 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
247 -> 253 [label="[0-9][A-N][P-T][V-Z][_][a-n][p-t][v-z]"]
247 -> 272 [label="[O][o]"]
247 -> 273 [label="[U][u]"]
248 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
248 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
248 -> 253 [label="[0-9][A-E][G-M][O-Z][_][a-e][g-m][o-z]"]
248 -> 267 [label="[F][f]"]
248 -> 261 [label="[N][n]"]
249 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
249 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
249 -> 253 [label="[0-9][A-Q][S-Z][_][a-q][s-z]"]
249 -> 265 [label="[R][r]"]
250 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
250 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
250 -> 253 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
250 -> 255 [label="[E][e]"]
251 -> 252
252 -> 225 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
252 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
252 -> 256 [label="[$]"]
253 -> 254
254 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
254 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
254 -> 256 [label="[$]"]
254 -> 253 [label="[0-9][A-Z][_][a-z]"]
255 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
255 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
255 -> 253 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
255 -> 261 [label="[S][s]"]
256 -> 257 [label="[0x00][{]"]
256 -> 251 [label="[0x01-[][0x5D-z][|-0xFF]"]
256 -> 258 [label="[\\]"]
257 -> 225 [label="yyaccept=0"]
257 -> 227 [label="yyaccept=1"]
257 -> 223 [label="yyaccept=2"]
257 -> 240 [label="yyaccept=3"]
257 -> 245 [label="yyaccept=4"]
257 -> 262 [label="yyaccept=5"]
257 -> 269 [label="yyaccept=6"]
257 -> 276 [label="yyaccept=7"]
258 -> 251 [label="[0x00-#][%-0xFF]"]
258 -> 259 [label="[$]"]
259 -> 260
260 -> 225 [label="[0x00]"]
260 -> 251 [label="[0x01-#][%-[][0x5D-0xFF]"]
260 -> 259 [label="[$]"]
260 -> 258 [label="[\\]"]
261 -> 262 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
261 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
261 -> 263 [label="[0x09][ ]"]
261 -> 253 [label="[0-9][A-Z][_][a-z]"]
262 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
263 -> 264
264 -> 262 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
264 -> 263 [label="[0x09][ ]"]
265 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
265 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
265 -> 253 [label="[0-9][A-T][V-Z][_][a-t][v-z]"]
265 -> 266 [label="[U][u]"]
266 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
266 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
266 -> 253 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
266 -> 261 [label="[E][e]"]
267 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
267 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
267 -> 253 [label="[0-9][A-E][G-Z][_][a-e][g-z]"]
267 -> 268 [label="[F][f]"]
268 -> 269 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
268 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
268 -> 270 [label="[0x09][ ]"]
268 -> 253 [label="[0-9][A-Z][_][a-z]"]
269 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
270 -> 271
271 -> 269 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
271 -> 270 [label="[0x09][ ]"]
272 -> 269 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
272 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
272 -> 270 [label="[0x09][ ]"]
272 -> 253 [label="[0-9][A-M][O-Z][_][a-m][o-z]"]
272 -> 279 [label="[N][n]"]
273 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
273 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
273 -> 253 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
273 -> 274 [label="[L][l]"]
274 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
274 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
274 -> 253 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
274 -> 275 [label="[L][l]"]
275 -> 276 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
275 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
275 -> 277 [label="[0x09][ ]"]
275 -> 253 [label="[0-9][A-Z][_][a-z]"]
276 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
277 -> 278
278 -> 276 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
278 -> 277 [label="[0x09][ ]"]
279 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
279 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
279 -> 253 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
279 -> 268 [label="[E][e]"]
280 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
280 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
280 -> 253 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
280 -> 281 [label="[L][l]"]
281 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
281 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
281 -> 253 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
281 -> 282 [label="[S][s]"]
282 -> 245 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
282 -> 252 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
282 -> 253 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
282 -> 268 [label="[E][e]"]
283 -> 284
284 -> 283 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
284 -> 285 [label="[0x0A]"]
284 -> 287 [label="[0x0D]"]
285 -> 286
286 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
287 -> 286 [label="[0x00-0x09][0x0B-0xFF]"]
287 -> 285 [label="[0x0A]"]
288 -> 289
289 -> 240 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
289 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
289 -> 256 [label="[$]"]
289 -> 288 [label="[0-9]"]
290 -> 291
291 -> 240 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
291 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*--][/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
291 -> 256 [label="[$]"]
291 -> 288 [label="[.]"]
291 -> 290 [label="[0-9]"]
292 -> 293
293 -> 240 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
293 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
293 -> 256 [label="[$]"]
293 -> 292 [label="[0-9]"]
294 -> 295
295 -> 240 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
295 -> 251 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
295 -> 256 [label="[$]"]
295 -> 294 [label="[0-9]"]
296 -> 297
297 -> 296 [label="[0x00-&][(-0xFF]"]
297 -> 298 [label="[']"]
298 -> 299
299 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
300 -> 301
301 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
302 -> 303
303 -> 232 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
303 -> 302 [label="[0x09][ ]"]
304 -> 229
305 -> 306
306 -> 227 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#-:][<-0xFF]"]
306 -> 305 [label="[0x09][ ]"]
306 -> 304 [label="[0x0A]"]
306 -> 308 [label="[0x0D]"]
306 -> 307 [label="[\"]"]
306 -> 283 [label="[;]"]
307 -> 234
308 -> 229 [label="[0x00-0x09][0x0B-0xFF]"]
308 -> 304 [label="[0x0A]"]
/* *********************************** */
ST_VARNAME -> 310
310 -> 311 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
310 -> 313 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-|][~]"]
310 -> 315 [label="[}]"]
311 -> 318
312 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:454"]
313 -> 314
314 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
315 -> 316
316 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:464"]
317 -> 318
318 -> 317 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
318 -> 312 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-~]"]
}
re2c: warning: line 384: column 13: escape has no effect: '\.' [-Wuseless-escape]
re2c: warning: line 384: column 32: escape has no effect: '\.' [-Wuseless-escape]
re2c: warning: line 391: column 27: escape has no effect: '\[' [-Wuseless-escape]
re2c: warning: line 392: column 11: escape has no effect: '\[' [-Wuseless-escape]
re2c: warning: line 648: unreachable rule in condition 'ST_DOUBLE_QUOTES' (shadowed by rules at lines 582, 587) [-Wunreachable-rules]
re2c: warning: line 623: unreachable rule in condition 'ST_OFFSET' (shadowed by rule at line 573) [-Wunreachable-rules]
re2c: warning: line 648: unreachable rule in condition 'ST_RAW' (shadowed by rules at lines 500, 541, 643) [-Wunreachable-rules]
re2c: warning: line 623: unreachable rule in condition 'ST_SECTION_VALUE' (shadowed by rule at line 573) [-Wunreachable-rules]
re2c: warning: line 648: unreachable rule in condition 'ST_VALUE' (shadowed by rules at lines 541, 547, 551, 559, 563, 569, 577, 623, 643) [-Wunreachable-rules]
