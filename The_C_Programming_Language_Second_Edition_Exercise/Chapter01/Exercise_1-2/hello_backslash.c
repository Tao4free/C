/*
 * Author:Tao Lu <hakufu.asano@gmail.com>
 *
 * Solution for Exercise_1-2, Chapter01 
 */

#include <stdio.h>

int 
main(void)
{
	printf("Case01:    'hello, world\\n'\n");
	printf("           \\n means 'newline', you alwasy print in one line withou it\n");
	printf("Output:    ");
	printf("hello, world\n");
	printf("\n");

	printf("Case02:    'hello, wo\\trld\\n'\n");
	printf("           \\t\\n means 'tab' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\trld\n");
	printf("\n");

	printf("Case03:    'hello, wo\\brld\\n'\n");
	printf("           \\b\\n means 'backspace' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\brld\n");
	printf("\n");

	printf("Case04:    'hello, wo\\frld\\n'\n");
	printf("           \\f\\n means 'formfeed' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\frld\n");
	printf("\n");

	printf("Case05:    'hello, wo\\nrld\\n'\n");
	printf("           \\n\\n means 'newline' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\nrld\n");
	printf("\n");

	printf("Case06:    'hello, wo\\rrld\\n'\n");
	printf("           \\r\\n means 'carriage return' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\rrld\n");
	printf("\n");

	printf("Case07:    'hello, wo\\vrld\\n'\n");
	printf("           \\v\\n means 'vertical tab' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\vrld\n");
	printf("\n");

	printf("Case08:    'hello, wo\\erld\\n'\n");
	printf("           \\e\\n means 'escape character' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\erld\n");
	printf("\n");

	printf("Case09:    'hello, wo\\e\\erld\\n'\n");
	printf("           \\e\\e\\n means 'escape character' & 'newline'\n");
	printf("Output:    ");
	printf("hello, wo\e\erld\n");
	printf("\n");

	return 0; /* or exit(0) */
}
