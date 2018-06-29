/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-3, Chapter01 
 */

#include <stdio.h>

/* printFahrenheit-Celcius table
 * 	for fahr_int = 0, 20, ..., 300 */

int 
main(void)
{
	int fahr_int, celsius_int;
	float fahr_float, celsius_float;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr_int = lower;
	while (fahr_int <= upper) {
		celsius_int = 5 * (fahr_int - 32) / 9;
		printf("%d\t%d\n", fahr_int, celsius_int);
		fahr_int = fahr_int + step;
	}
	printf("\n");

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr_int = lower;
	while (fahr_int <= upper) {
		celsius_int = 5 / 9 * (fahr_int - 32);
		printf("%d\t%d\n", fahr_int, celsius_int);
		fahr_int = fahr_int + step;
	}
	printf("\n");

	printf("%s\t%s\n","fahrenheit-T", "celsius-T");
	fahr_int = lower;
	while (fahr_int <= upper) {
		celsius_int = 5 * (fahr_int - 32) / 9;
		printf("%3d %6d\n", fahr_int, celsius_int);
		fahr_int = fahr_int + step;
	}
	printf("\n");

	printf("%s %s\n","fahrenheit-T", "celsius-T");
	fahr_float = lower;
	while (fahr_float <= upper) {
		celsius_float = (5.0 / 9.0) * (fahr_float - 32.0);
		printf("%12.0f %9.2f\n", fahr_float, celsius_float);
		fahr_float = fahr_float + step;
	}

	return 0; /* or exit(0) */
}
