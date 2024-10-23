//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int data = 100; //메모리 어딘가에 자리잡고 data변수 생성
	int* ptr; //int형 변수의 메모리 주소를 저장하는 변수 생성
	ptr = &data; //int형 변수의 메모리 변수를 저장하는 변수에 data변수의 주소를 간접 참조하여 저장
	*ptr = 200;

	printf("data %p %d\n", &data, data);
	printf("data %p %p\n", &ptr, ptr);

	return 0;
}