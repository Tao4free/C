/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-4, Chapter01 
 */

#include <stdio.h>

/* printCelcius-Fahrenheit table
 * 	for fahr_int = -50, 30, ..., 150 */

int 
main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -50;		/* lower limit of temperature table */
	upper = 150;	/* upper limit */
	step = 20;		/* step size */

	printf("%s %s\n", "celsius-T", "fahrenheit-T");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%9.0f %12.2f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0; /* or exit(0) */
}
