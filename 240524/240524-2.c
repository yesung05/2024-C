#include <stdio.h>

void func1() {

	printf("void �� �Լ��� �����ٰ� ����.\n");

}
int func2() {

	return 200;
}


int main() {

	int a;
	func1();
	a = func2();
	printf("int �� �Լ����� ������ �� ==> %d", a);

	return 0;
}