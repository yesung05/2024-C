#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ary[5] = { 0 }; //Ȥ�� ���� �ʱ�ȭ

	printf("4 ���� ���� �Է� >> ");
	for (int i = 0; i < 4; i++) {
		scanf("%d", &ary[i]);
		ary[4] += ary[i]; //sum �� ���� ��ſ� ������ ĭ�� ���� ����
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", ary[i]);
	}
	puts("");


	return 0;
}