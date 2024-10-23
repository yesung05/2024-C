#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("임의의 정수 입력 1 : ");
	scanf("%d", &a);
	printf("임의의 정수 입력 1 : ");
	scanf("%d", &b);
	
	int small = (a < b) ? a : b;
	int large = (a > b) ? a : b;

	printf("몫은 % d이고 나머지는 %d 입니다.", large/small, large%small);
	//printf("몫은 %d이고 나머지는 %d 입니다.", ((a > b) ? a : b) / ((a < b) ? a : b), ((a > b) ? a : b) % ((a < b) ? a : b)); 가독성 매우 나쁨
	return 0;
}