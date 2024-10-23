#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year;
	printf("년도 입력 : ");
	scanf("%d", &year);

	if (year % 400 == 0) {
			printf("%d년은 윤년입니다.\n", year);
	}
	else if (year % 4 == 0) {

		if (year % 100 != 0) {
			printf("%d년은 윤년입니다.\n", year);
		}
		else
			printf("%d년은 윤년이 아닙니다.\n", year);
	}
	else
		printf("%d년은 윤년이 아닙니다.\n", year);


	return 0;
}