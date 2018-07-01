/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-6 and Exercise_1-7, Chapter01 
 */

#include <stdio.h>

/* copy input to output */

int
main(void)
{
	int c;
	int f;

	printf("EOF's value: %d\n", EOF);
	f = getchar() != EOF;
	printf("not EOF's value %d\n", f);
	

	while ( (c = getchar()) != EOF) {
		putchar(c);
	}

	return 0; 
}
