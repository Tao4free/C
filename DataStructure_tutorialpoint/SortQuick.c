/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for shell sort
 *
 * Reference:https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_program_in_c.htm
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define RANGE 50

clock_t start, end;
double cpu_time_used;

int list[MAX];


void display(int *list) {
	int i, j, k;
	int step = 10;

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


void swap(int index1, int index2) {
	int temp = list[index1];
	list[index1] = list[index2];
	list[index2] = temp;
}


int divide(int left, int right, int pivot){
	int leftPosition = left - 1;
	int rightPosition = right;

	while(true) {
		while(list[++leftPosition] < pivot) {
			// do nothing
		}

		while(rightPosition > 0 && list[--rightPosition] > pivot) {
			// do nothing
		}

		if(leftPosition >= rightPosition) {
			break;
		}else {
			swap(leftPosition, rightPosition);
		}
	}

	swap(leftPosition, right);

	return leftPosition;
}


void quickSort(int left, int right){
	//printf("%2d, %2d\n", left, right);
	if(left >= right) {
		return;
	} else {
		int pivot = list[right];
		int dividePosition = divide(left, right, pivot);
		quickSort(left, dividePosition -1);
		quickSort(dividePosition + 1, right);
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
	quickSort(0, MAX-1);
	display(list);
	printf("\n");

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);
	
	return 0;
}
