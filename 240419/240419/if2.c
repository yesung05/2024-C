#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;
	printf("달을 입력해주세요:");
	scanf("%d", &month);
	//3~5 봄 6~8여름 9~11가을 12~2겨울
	if (3 <= month && month <= 5)
		printf("봄");
	else if (6 <= month && month <= 8)
		printf("여름");
	else if (9 <= month && month <= 11)
		printf("가을");
	else if (12 == month || 1 == month || 2 == month) //(12==month ||month <= 2) 도 가능
		printf("겨울");
	else
		printf("오류");

	printf("입니다.\n");
	return 0;
}