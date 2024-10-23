#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하세요 ==> ");
	scanf("%d", &num);
	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %X\n", num); //대문자로 출력시 16진수 알파벳도 대문자
	printf("8진수 ==> %o\n", num);


	return 0;
}