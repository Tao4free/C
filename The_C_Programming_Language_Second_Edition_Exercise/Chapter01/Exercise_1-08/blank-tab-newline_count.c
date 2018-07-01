/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-8, Chapter01 
 */

#include <stdio.h>

/* count blanks, tabs, newlines in input */

int
main(void)
{
	int c, nb, nt, nl;

	nb = nt = nl = 0;
	while ( (c = getchar()) != EOF)

	/* this doesn't work well unlike fortran */
	/*	if (c == ' ') {
	  		++nb;
	  		printf("blank");}
	  	if (c == '\t') {
	  		++nt;
	  		printf("tab");}
		if (c == '\n') {
			++nl;
			printf("newline");}
	*/
		if (c == ' ')
	      		++nb;
		else if (c == '\t')
	      		++nt;
		else if (c == '\n')
	      		++nl;
	
	printf("number of blanks: %d\n", nb);
	printf("number of tabs: %d\n", nt);
	printf("number of newline: %d\n", nl);

	return 0; 
}
