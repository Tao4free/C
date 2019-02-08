/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for merge sorting
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


void merge(int low, int mid, int high){
	printf(" \n", low, mid, high);
	printf("commit merge  low = % 2d,  mid = % 2d, high = % 2d \n", low, mid, high);
	int l1, l2, i;

	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
		if(list[l1] <= list[l2]) {
			b[i] = list[l1++];
			printf("if i = %d, b[%d] = %d \n", i, i, b[i]);
			printf("if l1 = %d, l2 = %d \n", l1, l2);
		} else {
			b[i] = list[l2++];
			printf("else i = %d, b[%d] = %d \n", i, i, b[i]);
			printf("else l1 = %d, l2 = %d \n", l1, l2);
		}
	}

	while(l1 <= mid)
		b[i++] = list[l1++];

	while(l2 <= high)
		b[i++] = list[l2++];

	for(i = low; i <= high; i++)
		list[i] = b[i];
	display(b), printf("\n");
}


void divide(int low, int high) {
	int mid;

	if(low < high) {
		mid = (low + high) / 2;
		//printf("before recursion        low = %d,  mid = %d, high = %d \n", low, mid, high);
		divide(low, mid);
		//printf("after low recursion     low = %d,  mid = %d, high = %d \n", low, mid, high);

		divide(mid +1, high);
		//printf("after high recursion    low = %d,  mid = %d, high = %d \n", low, mid, high);
		merge(low, mid, high);
	} else {
		//printf("last recursion          low = %d,  mid = %d, high = %d \n", low, mid, high);
		return;
	}
}


int main(void) {
	int n, number;
	
	srand((unsigned) time(NULL));
	for(n = 0; n < MAX; n++) {
		number = rand()%RANGE+1;
		list[n] = number;
	}

	//printf("Before insertion sort: \n");
	display(list);
	printf("\n");
	
	divide(0, MAX-1);

	//printf("After insertion sort: \n");
	//insertionSort(list);
	//display(list);
	//printf("\n");

	return 0;
}
