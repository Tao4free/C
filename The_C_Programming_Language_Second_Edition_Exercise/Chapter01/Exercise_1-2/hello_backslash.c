/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-01, Chapter01 
 */

#include <stdio.h>

int main(void){
    printf("Case01:   'hello, world\\n'\n");
    printf("          \\n means newline, you alwasy print in one line withou it\n");
	printf("Output:   ");
	printf("hello, world\n");
	printf("\n");

    printf("Case02:   'hello, wo\\trld\\n'\n");
    printf("          \\t\\n means tab&newline\n");
	printf("Output:   ");
	printf("hello, wo\trld\n");

	return 0; /* or exit(0) */
}
