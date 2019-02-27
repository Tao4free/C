/*
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define RANGE 100

clock_t start, end;
double cpu_time_used;


int main(void) {
	start = clock();

	int list[MAX], n, number;

	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	printf("clock() %f \n", clock());
	end = clock();
	cpu_time_used = ((double) (start - end)) / CLOCKS_PER_SEC;
	printf("The program took %f seconds\n", cpu_time_used);

	printf("clock() %f \n", clock());
}
