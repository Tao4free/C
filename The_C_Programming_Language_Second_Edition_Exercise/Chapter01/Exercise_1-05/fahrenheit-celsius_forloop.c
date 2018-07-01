/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-5, Chapter01 
 */

#include <stdio.h>

/* printFahrenheit-Celcius table
 * 	for fahr_int = 300, 280, ..., 0 */

int
main(void)
{
	int fahr;

	printf("%s %s\n","fahrenheit-T", "celsius-T");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%12d %9.2f\n", fahr, (5.0 / 9.0)*(fahr - 32.0));

	return 0; 
}
