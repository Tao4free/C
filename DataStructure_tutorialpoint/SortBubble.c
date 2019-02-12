/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for bubble sorting
 *
 * reference: https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_program_in_c.htm
 * modification: call by refernce
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

void bubbleSort(int *list) {
	int temp;
	int i,j;

	bool swap = false;

	for(i = 0; i < MAX-1; i++) {
		swap = false;

		for(j = 0; j < MAX-1-i; j++) {
			if(list[j] > list[j+1]) {
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;

				swap = true;
			}
		}

		if(!swap) {
			break;
		}
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

	printf("Before bubble sort: \n");
	//display(list);
	printf("\n");

	printf("After bubble sort: \n");
	bubbleSort(list);
	//display(list);
	printf("\n");
	
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);

	return 0;
}
