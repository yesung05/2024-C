#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��ϼ��� ==> ");
	scanf("%d", &num);
	printf("10���� ==> %d\n", num);
	printf("16���� ==> %X\n", num); //�빮�ڷ� ��½� 16���� ���ĺ��� �빮��
	printf("8���� ==> %o\n", num);


	return 0;
}