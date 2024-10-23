#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;

	printf("문자를 입력하세요: ");
	scanf("%c", &a);
	switch (a)
	{
	case 'a':
		printf("알파벳입니다.");
		break;
	case 'b':
		printf("알파벳입니다.");
		break;
	default:
		printf("문자를 입력하세요.");

	}



	return 0;
}