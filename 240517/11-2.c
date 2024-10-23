#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ary[5] = { 0 }; //혹시 몰라서 초기화

	printf("4 개의 정수 입력 >> ");
	for (int i = 0; i < 4; i++) {
		scanf("%d", &ary[i]);
		ary[4] += ary[i]; //sum 에 저장 대신에 마지막 칸에 직접 저장
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", ary[i]);
	}
	puts("");


	return 0;
}