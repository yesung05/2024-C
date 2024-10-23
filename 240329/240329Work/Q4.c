#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("실행 결과 :\n");
	printf("첫번째 값 ==> ");
	scanf("%d", &num1);
	printf("두번째 값 ==> ");
	scanf("%d", &num2);
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}