#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Ps:
	/*!re2c
		re2c:yyfill:enable = 0;
				Ps = [\x28-\x28\x5b-\x5b\x7b-\x7b\u0f3a-\u0f3a\u0f3c-\u0f3c\u169b-\u169b\u201a-\u201a\u201e-\u201e\u2045-\u2045\u207d-\u207d\u208d-\u208d\u2329-\u2329\u2768-\u2768\u276a-\u276a\u276c-\u276c\u276e-\u276e\u2770-\u2770\u2772-\u2772\u2774-\u2774\u27c5-\u27c5\u27e6-\u27e6\u27e8-\u27e8\u27ea-\u27ea\u27ec-\u27ec\u27ee-\u27ee\u2983-\u2983\u2985-\u2985\u2987-\u2987\u2989-\u2989\u298b-\u298b\u298d-\u298d\u298f-\u298f\u2991-\u2991\u2993-\u2993\u2995-\u2995\u2997-\u2997\u29d8-\u29d8\u29da-\u29da\u29fc-\u29fc\u2e22-\u2e22\u2e24-\u2e24\u2e26-\u2e26\u2e28-\u2e28\u3008-\u3008\u300a-\u300a\u300c-\u300c\u300e-\u300e\u3010-\u3010\u3014-\u3014\u3016-\u3016\u3018-\u3018\u301a-\u301a\u301d-\u301d\ufd3e-\ufd3e\ufe17-\ufe17\ufe35-\ufe35\ufe37-\ufe37\ufe39-\ufe39\ufe3b-\ufe3b\ufe3d-\ufe3d\ufe3f-\ufe3f\ufe41-\ufe41\ufe43-\ufe43\ufe47-\ufe47\ufe59-\ufe59\ufe5b-\ufe5b\ufe5d-\ufe5d\uff08-\uff08\uff3b-\uff3b\uff5b-\uff5b\uff5f-\uff5f\uff62-\uff62];
		Ps { goto Ps; }
		* { return YYCURSOR == limit; }
	*/
}
static const char buffer_Ps [] = "\x28\x5B\x7B\xE0\xBC\xBA\xE0\xBC\xBC\xE1\x9A\x9B\xE2\x80\x9A\xE2\x80\x9E\xE2\x81\x85\xE2\x81\xBD\xE2\x82\x8D\xE2\x8C\xA9\xE2\x9D\xA8\xE2\x9D\xAA\xE2\x9D\xAC\xE2\x9D\xAE\xE2\x9D\xB0\xE2\x9D\xB2\xE2\x9D\xB4\xE2\x9F\x85\xE2\x9F\xA6\xE2\x9F\xA8\xE2\x9F\xAA\xE2\x9F\xAC\xE2\x9F\xAE\xE2\xA6\x83\xE2\xA6\x85\xE2\xA6\x87\xE2\xA6\x89\xE2\xA6\x8B\xE2\xA6\x8D\xE2\xA6\x8F\xE2\xA6\x91\xE2\xA6\x93\xE2\xA6\x95\xE2\xA6\x97\xE2\xA7\x98\xE2\xA7\x9A\xE2\xA7\xBC\xE2\xB8\xA2\xE2\xB8\xA4\xE2\xB8\xA6\xE2\xB8\xA8\xE3\x80\x88\xE3\x80\x8A\xE3\x80\x8C\xE3\x80\x8E\xE3\x80\x90\xE3\x80\x94\xE3\x80\x96\xE3\x80\x98\xE3\x80\x9A\xE3\x80\x9D\xEF\xB4\xBE\xEF\xB8\x97\xEF\xB8\xB5\xEF\xB8\xB7\xEF\xB8\xB9\xEF\xB8\xBB\xEF\xB8\xBD\xEF\xB8\xBF\xEF\xB9\x81\xEF\xB9\x83\xEF\xB9\x87\xEF\xB9\x99\xEF\xB9\x9B\xEF\xB9\x9D\xEF\xBC\x88\xEF\xBC\xBB\xEF\xBD\x9B\xEF\xBD\x9F\xEF\xBD\xA2\xFF";
int main ()
{
	if (!scan (buffer_Ps, buffer_Ps + sizeof (buffer_Ps) - 1))
		printf("test 'Ps' failed\n");
}
