/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for insertion sorting
 * 
 * Reference: https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_program_in_c.htm
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000
#define RANGE 1000000

clock_t start, end;
double cpu_time_used;


void display(int *list) {
	int i, j, k;
	int step = 20;

	printf("[ ");
	printf("\n");
	for(j = 0; j < MAX/step; j++) {
		for(i = 0; i < step; i++) {
			k = step*j + i;
			//printf("%d ", k);
			printf("%d ", list[k]);
		}
		printf("\n");
	}
	printf("]");
}


void insertionSort(int *list) {
	int valueToInsert, holePosition;
	int i;

	for(i = 0; i < MAX; i++) {
		valueToInsert = list[i];
		holePosition = i;

		while(holePosition > 0 && list[holePosition-1] > valueToInsert) {
			list[holePosition] = list[holePosition-1];
			holePosition = holePosition - 1;
		}

		list[holePosition] = valueToInsert;
	}

	return;
}

	   


int main(void) {
	start = clock();

	int list[MAX], n, number;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	printf("Before insertion sort: \n");
	display(list);
	printf("\n");

	printf("After insertion sort: \n");
	insertionSort(list);
	display(list);
	printf("\n");

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);
	
	return 0;
}
