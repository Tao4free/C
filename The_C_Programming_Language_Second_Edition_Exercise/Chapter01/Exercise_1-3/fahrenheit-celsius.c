/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-3, Chapter01 
 */

#include <stdio.h>

/* printFahrenheit-Celcius table
 * 	for fahr = 0, 20, ..., 300 */

int 
main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("\n");

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 / 9 * (fahr - 32);
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0; /* or exit(0) */
}
