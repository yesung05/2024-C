#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1, b = 5, c = 10;
	printf("%d \n", a++);
	printf("%d \n", ++a + --c);
	printf("%d \n", --c - b--);
	printf("%d \n", a += ++c + b);
	printf("%d \n", c++ % b);
	printf("%d \n", ++c / ++a);
	printf("%lf \n", (double)c / b);

	return 0;
}