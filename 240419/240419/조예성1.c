#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char symbol;
	printf("첫 번째 수를 입력하세요: ");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요 : ");
	scanf(" %c", &symbol);

	printf("두 번째 수를 입력하세요: ");
	scanf("%d", &b);
	//if(symbol == '연산자')로도 가능함.
	switch (symbol) {
	case '+':
		printf("%d + %d = %d 입니다.\n",a,b,a+b);
		break;
	case '-':
		printf("%d - %d = %d 입니다.\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d 입니다.\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %lf 입니다.\n", a, b, a / (double)b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다.\n", a, b, a % b); //%%로 해야 %가 정상적으로 촐력 됨.
		break;
	default:
		printf("연산자를 잘못 입력했습니다.\n");
		break;
	}
	return 0;
}