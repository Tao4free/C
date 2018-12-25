/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-12, Chapter01 
 */

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* bare-bones version of the UNIX program wc 
 * count lines, words, and chracters in input
 * write one word one line
 */

int
main(void)
{
	int c, nl, nw, nc, state, nout;

	state = OUT;
	nl = nw = nc = nout = 0;
	while ( (c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			++nout;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
			nout = 0;
		}
		if (state == IN)
	      		putchar(c);
		if (state == OUT && nout == 1 )
	      		putchar('\n');
	}

	putchar('\n');
	printf("number of newline: %d\n", nl);
	printf("number of words: %d\n", nw);
	printf("number of characters: %d\n", nc);
	
	return 0; 
}
