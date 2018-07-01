/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-7.5 (not really exercise), Chapter01 
 */

#include <stdio.h>

/* count chracters in input; 2st version */

int
main(void)
{
	double nc;

	for ( nc = 0; getchar() != EOF; ++nc) 
		;
	printf("%.0f\n", nc);

	return 0; 
}
