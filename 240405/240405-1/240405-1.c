#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	int plus;
	float avg;
	printf("두 정수를 입력하시오.\n");
	scanf("%d %d", &num1, &num2);
	plus = num1 + num2;
	avg = plus / 2.0;
	printf("합  : %d + %d = %d\n", num1, num2, plus);
	printf("평균: %d / %d = %f\n", plus, 2, avg);

	return 0;
}