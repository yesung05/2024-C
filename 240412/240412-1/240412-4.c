#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double cm = 0;

	printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
	scanf("%lf", &cm);

	printf("%lf ��Ƽ����:%7.3lf ��Ʈ", cm, cm / 30.48);
	//printf("%lf ��Ƽ����: %.3lf ��Ʈ", cm, cm / 30.48); ����� ����

	return 0;
}