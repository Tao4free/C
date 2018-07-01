/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-5-1, Chapter01 
 */

#include <stdio.h>
#define	LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit */
#define	STEP	20	/* step size */

/* print Fahrenheit-Celsius table */
int
main(void)
{
	int fahr;

	printf("%s %s\n","fahrenheit-T", "celsius-T");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%12d %9.2f\n", fahr, (5.0 / 9.0)*(fahr - 32.0));

	return 0; 
}
