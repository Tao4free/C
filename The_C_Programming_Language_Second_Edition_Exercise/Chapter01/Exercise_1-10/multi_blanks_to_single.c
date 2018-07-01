/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-9, Chapter01 
 */

#include <stdio.h>

/* convert multipe blanks to single one */

int
main(void)
{
	int c, nb;

	nb = 1;
	while ( (c = getchar()) != EOF) {
		if (c != ' ') {
	      		putchar(c);
			nb =1;
		}
		else if( nb == 1) {
			putchar(c);
			++nb;
		}
		else
	      		;
	}
	
	return 0; 
}
