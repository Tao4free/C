#include <stdio.h>

void display(int max,int *list) {
	int n;

	printf("[ ");
	for(n = 0; n < max; n++) {
		printf("%d ", list[n]);
	}
	printf("]\n");
}
