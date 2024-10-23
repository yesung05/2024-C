#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money = 0;
	printf("## 교환할 돈은 ? ");
	scanf("%d", &money);
	printf("오백 원짜리 ==> %d 개\n", money / 500);
	money %= 500; // money에 500으로 나눈 나머지값 저장
	printf("백 원짜리 ==> %d 개\n", money / 100);
	money %= 100; // money에 100으로 나눈 나머지값 저장
	printf("오십 원짜리 ==> %d 개\n", money / 50);
	money %= 50; // money에 50으로 나눈 나머지값 저장
	printf("십 원짜리 ==> %d 개\n", money / 10);
	money %= 10; // money에 10으로 나눈 나머지값 저장
	printf("바꾸지 못한 잔돈 ==> %d 원\n", money);

	return 0;
}