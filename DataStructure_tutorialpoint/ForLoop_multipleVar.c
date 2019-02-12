/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Test for multiple variable loop
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define RANGE 50


int list[MAX], b[MAX-1];


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


void mulVarLoop(int low, int mid, int high){
	printf("Input  low = %d,  mid = %d, high = %d \n", low, mid, high);
	int l1, l2, i;
    int origin = 8, interval = 1;

	for(l1 =0; l1 <= high; l1++) 
		printf("origin = %2d\n", origin), origin -= interval;

	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
		return;
		//printf("loop i = % 2d l1 = % 2d, l2 = % 2d \n", i, l1, l2);
		//printf("before l1++ l1 = % 2d, before l2++ l2 = % 2d \n", l1, l2);
		//printf("list[l1++] = % 2d, list[l2++]  = % 2d \n", list[l1++], list[l2++]);
		//printf("list[++l1] = % 2d, list[++l2]  = % 2d \n", list[++l1], list[++l2]);
		//l1++, l2++; 
		//printf("after  l1++ l1 = % 2d, after  l2++ l2 = % 2d \n", l1, l2);
	}
}




int main(void) {
	int low, mid, high;
	int n, number;
	low = 0, mid = 4, high = 9;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	display(list);
	mulVarLoop(0, 4, 9);

	return 0;
}
