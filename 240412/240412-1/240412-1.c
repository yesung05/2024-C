#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 100, b = -200;

	printf("AND 연산의 결과 : %d\n", a && b);
	printf("비교한 문자의 결과 : %d\n", ('a' > 'b')); //false
	printf("비교한 문자의 결과 : %d\n", (4 == 4.0)); //true

	return 0;
}