#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c; //�Է� �������ϱ� �ʱ�ȭ�� ���ص� ��� ����
	
	printf("������ ���� �Է� >> ");
	scanf("%d %d %d", &a, &b, &c);

	printf("���� ū �� : %d\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
	

	

	return 0;
}