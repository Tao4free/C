/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-14, Chapter01 
 */

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count character frequency, print histogram 
 */

int
main(void)
{
	int c, i, j, nc, np, state, nout;
	int ncharfrequency[52];

	for (i = 0; i < 52; ++i)
		ncharfrequency[i] = 0;

	nc = nout = 0;
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
				if (c - 'a' < 0) np = c - 'A';
				else np = c - 'a' + 26;
				/*printf("%02d\n", np);*/
				++ncharfrequency[np];
		}
		/*
		if (state == OUT && nout == 1 ) {
				++ncharfrequency[nc];
				nc = 0;
		}
		*/
	}

	putchar('\n');
	printf("Histogram: \n");
	for (i = 0; i < 52; ++i) {
		if(i >= 26) np = i - 26 + 97;
		else np = i + 65;

		if (ncharfrequency[i]==0) continue;

		printf("Frequency of character %c is %*d : ", np, 4, ncharfrequency[i]);
		for(j = 0; j < ncharfrequency[i]/5; j++) putchar('#');
		putchar('\n');

		/*printf("Character %d", 'A');*/
	}

	return 0; 
}
