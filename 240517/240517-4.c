#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //라이브러리

int dongyang(int a) {
	//정수형 사용자 정의 함수
	return a
}

int main() {
	int input[20] = { 0 };

	printf("배열에 저장할 정수를 여러 개 입력하시오. ");
	printf("0을 입력하면 입력을 종료합니다. \n");
	int i = 0;
	do {
		scanf("%d", &input[i]);
	} while (input[i++] != 0);

	i = 0;

	while (input[i] != 0) {
		printf("%d ", input[i++]);
	}
	puts("");


	return 0;
}