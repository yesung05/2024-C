#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multy(int num);

int main() {
	int num = 0;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &num);
	multy(num);
	return 0;
}

void multy(int num) {
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}
	return;
}