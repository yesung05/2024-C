#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("������ ���� �Է� 1 : ");
	scanf("%d", &a);
	printf("������ ���� �Է� 1 : ");
	scanf("%d", &b);
	
	int small = (a < b) ? a : b;
	int large = (a > b) ? a : b;

	printf("���� % d�̰� �������� %d �Դϴ�.", large/small, large%small);
	//printf("���� %d�̰� �������� %d �Դϴ�.", ((a > b) ? a : b) / ((a < b) ? a : b), ((a > b) ? a : b) % ((a < b) ? a : b)); ������ �ſ� ����
	return 0;
}