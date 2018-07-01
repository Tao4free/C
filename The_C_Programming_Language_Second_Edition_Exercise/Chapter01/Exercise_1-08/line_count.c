/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-8(not really exercise), Chapter01 
 */

#include <stdio.h>

/* count lines in input */

int
main(void)
{
	int c, nl;

	nl = 0;
	while ( (c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);

	return 0; 
}
