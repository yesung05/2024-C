#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, result;
	printf("ù ��° ����� �� �Է�==> ");
	scanf("%d", &a);
	printf("�� ��° ����� �� �Է�==> ");
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