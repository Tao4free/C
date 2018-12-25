/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-13, Chapter01 
 */

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count word length, print histogram 
 */

int
main(void)
{
	int c, i, j, nc, state, nout;
	int nwordlen[45];

	for (i = 0; i < 45; ++i)
		nwordlen[i] = 0;

	nc = nout = 0;
	state = OUT;
	while ( (c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t'
         || c == '-' || c == ',' || c == '/'
		 || c == '.'
         || c == ':' || c == '(' || c == ')'){
				state = OUT;
				++nout;
		}
		else if  (state == OUT) {
				state = IN;
				nout = 0;
		}
		if (state == IN) {
				putchar(c);
				++nc;
				/*printf(" %d\n", nc);*/
		}
		if (state == OUT && nout == 1 ) {
				printf(" \n");
				++nwordlen[nc];
				nc = 0;
		}
	}

	putchar('\n');
	printf("Histogram: \n");
	for (i = 0; i < 45; ++i) {
		if (nwordlen[i]==0) continue;

		printf("word length is %02d: %04d ", i,nwordlen[i]);
		for(j = 0; j < nwordlen[i]; j++) putchar('#');
		putchar('\n');

		/*printf("word length is %02d : %d\n", i, nwordlen[i]);*/
		/*printf("%.*d\n", nwordlen[i], 0); */
		/*printf(" %.*s\n", nwordlen[i],"############################");*/
	}

	return 0; 
}
