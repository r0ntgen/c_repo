#include <stdio.h>
int a=5;
int b=6;
int add();
int product();
int calltime();
int main(void)
{
	printf("Hello World\n");
	printf("a+b=%d\n",add());
	printf("a+b=%d\n",add());
	printf("a*b=%d\n",product());
	printf("called %d times",calltime());
	return 0;
}