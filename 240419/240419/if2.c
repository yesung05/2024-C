#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;
	printf("���� �Է����ּ���:");
	scanf("%d", &month);
	//3~5 �� 6~8���� 9~11���� 12~2�ܿ�
	if (3 <= month && month <= 5)
		printf("��");
	else if (6 <= month && month <= 8)
		printf("����");
	else if (9 <= month && month <= 11)
		printf("����");
	else if (12 == month || 1 == month || 2 == month) //(12==month ||month <= 2) �� ����
		printf("�ܿ�");
	else
		printf("����");

	printf("�Դϴ�.\n");
	return 0;
}