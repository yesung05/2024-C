#include <stdio.h>

void func1() {

	printf("void 형 함수는 돌려줄게 없음.\n");

}
int func2() {

	return 200;
}


int main() {

	int a;
	func1();
	a = func2();
	printf("int 형 함수에서 돌려준 값 ==> %d", a);

	return 0;
}