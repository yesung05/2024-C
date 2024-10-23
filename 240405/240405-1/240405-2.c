#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//비트 연산자 는 비트를 왼쪽 오른쪽으로 옮기는 연산자
int main()
{
	int a = 0;
	printf("%d\n", a++);
	a = 0;
	printf("%d\n", ++a);
	if ('1' == 1) {
		printf("'1'은 1이 맞습니다.\n");
	}
	else {
		printf("'1'은 1이 아닙니다.\n");
	}
	return 0;
}