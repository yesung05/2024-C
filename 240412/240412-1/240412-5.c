#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c; //입력 받을꺼니까 초기화는 안해도 상관 없음
	
	printf("세개의 정수 입력 >> ");
	scanf("%d %d %d", &a, &b, &c);

	printf("가장 큰 수 : %d\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
	

	

	return 0;
}