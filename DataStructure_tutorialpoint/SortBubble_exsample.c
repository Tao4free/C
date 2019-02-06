/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for bubble sorting
 * reference: https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_program_in_c.htm
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX 15

int list[MAX] = {17,59,30,25,72,31,67,56,95,34,82,80,29,9,70};

int bubbleSort(void) {
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
}

	   
int display(void) {
	int i;

	printf("[ ");
	for(i = 0; i < MAX; i++) {
		printf("%d ", list[i]);
	}
	printf("]");
}


int main(void) {
	printf("Before bubble sort: \n");
	display();
	printf("\n");

	printf("After bubble sort: \n");
	bubbleSort();
	display();
	printf("\n");
	
	return 0;
}
