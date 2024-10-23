#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int);

int main(void) { //void는 안 적어도 상관 없음

	for (int i = 1; i <= 10; i++) {
		printf("%3d! = %d\n",i, factorial(i));

	}

	return 0;

}

int factorial(int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return (n * factorial(n - 1));
	}

}