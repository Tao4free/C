/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for bubble sorting
 * reference: https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_program_in_c.htm
 * modification: call by refernce
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX 15

int list[MAX] = {72,94,9,42,14,95,30,91,60,59,61,30,36,43,33};

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

	   
void display(int *list) {
	int i;

	printf("[ ");
	for(i = 0; i < MAX; i++) {
		printf("%d ", list[i]);
	}
	printf("]");
}


int main(void) {
	printf("Before bubble sort: \n");
	display(list);
	printf("\n");

	printf("After bubble sort: \n");
	bubbleSort(list);
	display(list);
	printf("\n");
	
	return 0;
}
