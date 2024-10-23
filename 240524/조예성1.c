#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int giho, int a, int b);


int main() {
	int giho;
	int num1, num2;
	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &giho);
	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &num1, &num2);
	printf("계산 결과는 : %d",calc(giho, num1, num2));

	return 0;

}

int calc(int giho, int a, int b) {
	switch (giho)
	{
	case 1:
		return a + b;
		break;
	case 2:
		return a - b;
		break;
	case 3:
		return a * b;
		break;
	case 4:
		return a / b;
		break;
	default:
		printf("잘못 입력하셨습니다.");
		break;
	}
	return 0;
}