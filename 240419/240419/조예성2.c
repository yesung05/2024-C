#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;
	printf("�⵵�� ��(month)�� �Է��ϼ���. >> ");
	scanf("%d", &month);

	if (month >= 10) //ū ������ ����ϸ� ���� �����ϰ� �� �� ����. (�׸��� �˰���?)
		printf("%d��(month)�� 4�б� �Դϴ�.\n", month);
	else if (month >= 7)
		printf("%d��(month)�� 3�б� �Դϴ�.\n", month);
	else if (month >= 4)
		printf("%d��(month)�� 2�б� �Դϴ�.\n", month);
	else if (month >= 1)
		printf("%d��(month)�� 1�б� �Դϴ�.\n", month);
	else
		printf("1���� 12�� �߿��� �Է��ϼ���.\n");

	return 0;
}
