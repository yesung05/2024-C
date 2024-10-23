#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, result;
	printf("첫 번째 계산할 값 입력==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값 입력==> ");
	scanf("%d", &b);
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);
	result = a * b;
	printf("%d * %d = %d \n", a, b, result);
	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
	return 0;
}