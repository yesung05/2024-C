#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	int plus;
	float avg;
	printf("�� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &num1, &num2);
	plus = num1 + num2;
	avg = plus / 2.0;
	printf("��  : %d + %d = %d\n", num1, num2, plus);
	printf("���: %d / %d = %f\n", plus, 2, avg);

	return 0;
}