/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for shell sort
 *
 * Reference:https://www.tutorialspoint.com/data_structures_algorithms/shell_sort_program_in_c.htm
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000
#define RANGE 1000000

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


void shellSort(){
	int inner, outer, insertValue;
	int elements = MAX;
	int interval = 1;

	while(interval <= elements / 3)
		interval = interval*3 + 1;

	while(interval > 0) {
	
		for(outer = interval; outer < elements; outer++) {
			insertValue = list[outer];
			inner = outer;
		
			while(inner - interval >= 0 && list[inner - interval] >= insertValue){
				list[inner] = list[inner - interval];
				inner -= interval;
			}
		
			list[inner] = insertValue;
		}
		
		interval = (interval - 1) / 3;
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
	shellSort();
	display(list);
	printf("\n");

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Took %f seconds to execute \n", cpu_time_used);
	
	return 0;
}
