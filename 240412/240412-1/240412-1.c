#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 100, b = -200;

	printf("AND ������ ��� : %d\n", a && b);
	printf("���� ������ ��� : %d\n", ('a' > 'b')); //false
	printf("���� ������ ��� : %d\n", (4 == 4.0)); //true

	return 0;
}