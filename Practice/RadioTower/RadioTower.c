/*
 * RadioTower practice
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define RANGE 100

clock_t start, end;
double cpu_time_used;


int ck_comm(int n) {
	

int main(void) {
	start = clock();
	
	int list[MAX], n, number;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	for(n = 0; n < MAX; n++) {
		ck_comm(n);
	}

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);
}
