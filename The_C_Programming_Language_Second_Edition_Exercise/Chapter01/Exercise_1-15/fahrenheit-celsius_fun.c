/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-15, Chapter01 
 */

#include <stdio.h>

/* printFahrenheit-Celcius table
 * 	for fahr_int = 0, 20, ..., 300 */

// function prototype, also called function declaration
float f2c(float f);

// main function, program starts from here
int main(void)
{
	int fahr_int, celsius_int;
	float fahr_float, celsius_float;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("%s %s\n","fahrenheit-T", "celsius-T");
	fahr_float = lower;
	while (fahr_float <= upper) {
		printf("%12.0f %9.2f\n", fahr_float, f2c(fahr_float));
		fahr_float = fahr_float + step;
	}

	return 0; /* or exit(0) */
}

float f2c(float f)
{
	float c;
	c = (5.0 / 9.0) * (f - 32.0);
	return c;
}
