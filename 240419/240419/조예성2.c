#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;
	printf("년도의 월(month)을 입력하세요. >> ");
	scanf("%d", &month);

	if (month >= 10) //큰 수부터 계산하면 식을 간단하게 할 수 있음. (그리디 알고리즘?)
		printf("%d월(month)은 4분기 입니다.\n", month);
	else if (month >= 7)
		printf("%d월(month)은 3분기 입니다.\n", month);
	else if (month >= 4)
		printf("%d월(month)은 2분기 입니다.\n", month);
	else if (month >= 1)
		printf("%d월(month)은 1분기 입니다.\n", month);
	else
		printf("1부터 12월 중에서 입력하세요.\n");

	return 0;
}
