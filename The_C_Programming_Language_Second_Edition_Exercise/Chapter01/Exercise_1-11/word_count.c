/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-11, Chapter01 
 */

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* bare-bones version of the UNIX program wc 
 * count lines, words, and chracters in input
 */

int
main(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ( (c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
	      		++nl;
		if (c == ' ' || c == '\n' || c == '\t')
	      		state = OUT;
		else if (state == OUT) {
	      		state = IN;
	      		++nw;
		}
	}
	printf("number of newline: %d\n", nl);
	printf("number of words: %d\n", nw);
	printf("number of characters: %d\n", nc);
	
	return 0; 
}
