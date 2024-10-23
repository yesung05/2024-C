#include <stdio.h>

int factorial(int n);

int main() {

	//소프트웨어 개발 방법론
	printf("%d", factorial(5));

	return 0;
}

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	//오늘 그럴 가능성이 있다고?
	return n * factorial(n - 1);
}
//재귀함수 하면 나올 내용