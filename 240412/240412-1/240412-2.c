#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("������ �ΰ� �Է��ϼ��� >> ");
	scanf("%d %d", &a, &b);
	
	printf("�� ������ ū ���� : %d\n", (a > b) ? a : b);
	printf("�� ������ ���� ���� : %d\n", (a < b) ? a : b);
	printf("���밪�� : %d\n", (a > 0) ? a : -a);
	printf("a�� ¦���ΰ�? %s\n", ((a % 2) == 0) ? "¦��" : "Ȧ��");
	((a % 2) == 0) ? printf("¦��\n") : printf("Ȧ��\n");
	return 0;
}







//int main()
//{
//	int amt = 0; //amount
//	int free = 10;
//	printf("�� �ݾ��� �Է��ϼ��� : ");
//	scanf("%d", &amt);
//
//	int sale = (amt>=10000) && (free++ >= 10);
//
//	printf("����: %d ���� ��: %d \n", sale, free); //0 9
//
//	return 0;
//}