/*
 * RadioTower practice
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <display.h>

#define MAX 10
#define RANGE 100

clock_t start, end;
double cpu_time_used;

int list[MAX];

int comp(int strt, int end, int pivot) {
	//printf("strt = %4d, end = %d ", strt, end);
	int m;

	for(m = strt+1; m <= end-1; m++ ) {
		if(list[m] > list[strt] || list[m] > list[end]) {
			return 0;
		}
		if( (end - strt) == 1 ) {
			return 1;
		}
	}

	return 1;
}


int divide(int n) {
	int i, sum;
	int flag;

	sum = 0;
	for(i = 0; i < n; i++) {
		//printf("n = %4d, i = %d \n", n, i);
		flag = comp(i, n, n);
		//printf("flag is %4d\n", flag);
		if(flag == 1 && i != n) {
			sum += list[i];
		}
	}

	for(i = n+1; i < MAX; i++) {
		//printf("n = %4d, i = %d \n", n, i);
		flag = comp(n, i, n);
		//printf("flag is %4d\n", flag);
		if(flag == 1 && i != n) {
			sum += list[i];
		}
	}
	
	return sum;
}


int main(void) {
	start = clock();
	
	int n, number;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	display(MAX, list);

	for(n = 0; n < MAX; n++) {
		int r = divide(n);
		printf("for n = %4d communication sum is %4d\n", n, r);
	}

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);

	return 0;
}
