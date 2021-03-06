/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for merge sorting
 *
 * Reference: https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_program_in_c.htm
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000
#define RANGE 1000000

clock_t start, end;
double cpu_time_used;

int list[MAX], b[MAX-1];


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


void merge(int low, int mid, int high){
	int l1, l2, i;

	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
		if(list[l1] <= list[l2]) {
			b[i] = list[l1++];
		} else {
			b[i] = list[l2++];
		}
	}

	while(l1 <= mid) {
		b[i++] = list[l1++];
	}

	while(l2 <= high) {
		b[i++] = list[l2++];
	}

	for(i = low; i <= high; i++)
		list[i] = b[i];
}


void divide(int low, int high) {
	int mid;

	if(low < high) {
		mid = (low + high) / 2;

		divide(low, mid);
		divide(mid +1, high);

		merge(low, mid, high);
	} else {
		return;
	}
}

int main(void) {
	start = clock();

	int n, number;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	printf("Before insertion sort: \n");
	display(list);
	printf("\n");

	printf("After insertion sort: \n");
	divide(0, MAX-1);
	display(list);
	printf("\n");

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);
	
	return 0;
}
