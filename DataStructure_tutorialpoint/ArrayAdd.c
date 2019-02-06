#include <stdio.h>

int main(void) {
	int LA[] = {1,3,5,7,8};
	int item = 10, k = 3, n = 5;
	int i = 0, j = n;
	
	printf("The original array elements are :\n");
	
	for(i = 0; i<n; i++) {
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	n = n + 1;
	
	printf("Start to check loop:\n");
	while( j >= k) {
		printf("before j = %d, LA[j+1] = %d, LA[j] = %d \n", j, LA[j+1], LA[j]);
		LA[j+1] = LA[j];
		printf("after  j = %d, LA[j+1] = %d, LA[j] = %d \n", j, LA[j+1], LA[j]);
		j = j - 1;
	}
	
	LA[k] = item;
	
	printf("The array elements after insertion :\n");
	
	for(i = 0; i<n; i++) {
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	return 0;
}
