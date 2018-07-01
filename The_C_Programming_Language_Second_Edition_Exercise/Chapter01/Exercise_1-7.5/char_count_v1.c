/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-7.5(not really exercise), Chapter01 
 */

#include <stdio.h>

/* count chracters in input; 1st version */

int
main(void)
{
	long nc;

	nc = 0;
	while ( getchar() != EOF) 
		++nc;
	printf("%1d\n", nc);

	return 0; 
}
