#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x, y, z, max;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("최대값:%d", max);

	return 0;
}