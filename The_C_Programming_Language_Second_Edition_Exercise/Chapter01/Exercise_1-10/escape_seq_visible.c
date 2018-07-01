/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-10, Chapter01 
 */

#include <stdio.h>

/* make escape sequency visible */

int
main(void)
{
	int c, s;

	s = '\\';
	while ( (c = getchar()) != EOF) {
		if (c == '\t') {
	      		putchar(s);
	      		putchar('t');
		}
		else if (c == '\b') {
	      		putchar(s);
	      		putchar('b');
		}
		else if (c == '\\') {
	      		putchar(s);
	      		putchar(s);
		}
		else
			putchar(c);
	}
	
	return 0; 
}
