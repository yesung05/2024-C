#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num;
	//>19 �̼��� 
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &num);

	//printf("�Է��� ���� %d�̰�\n", num);

	if (num>=20 && num<=39) {
		printf("û���Դϴ�.\n");
	}
	else if (num>=40 && num<=59) {
		printf("������Դϴ�.\n");
	}
	else {
		printf("��Ÿ�Դϴ�.\n");
	}

	printf("ó���� �����մϴ�\n");

	return 0;
}