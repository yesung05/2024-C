#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &num1);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &num2);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &num3);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &num4);
	result = num1 + num2 + num3 + num4;
	printf("%d + %d + %d + %d = %d\n", num1, num2, num3, num4, result);


	return 0;
}