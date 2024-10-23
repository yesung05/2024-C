#include <stdio.h>

int main() {

	int num1 = 10;//정수형 변수 선언
	int num2 = 30;

	printf("선언된 두 변수의 합은 %d이다. \n", num1 + num2);
	printf("선언된 두 변수의 차는 %d이다. \n", num2 - num1);//abs->절댓값으로 변환
	printf("선언된 두 변수의 곱은 %d이다. \n", num1 * num2);
	printf("선언된 두 변수의 나누기 몫은 %d이다. \n", num2 / num1);

	return 0;
}