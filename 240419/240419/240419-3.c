#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &a);
	switch (a)
	{
	case 'a':
		printf("���ĺ��Դϴ�.");
		break;
	case 'b':
		printf("���ĺ��Դϴ�.");
		break;
	default:
		printf("���ڸ� �Է��ϼ���.");

	}



	return 0;
}