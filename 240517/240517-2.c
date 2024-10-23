#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*int a, b, c, d, sum;
	printf("1 번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("2 번째 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("3 번째 숫자를 입력하세요 : ");
	scanf("%d", &c);
	printf("4 번째 숫자를 입력하세요 : ");
	scanf("%d", &d);
	sum = a + b + c + d;
	printf(" 합계 ==> %d \n", sum);*/

	int aa[4];
	int sum;
	/*printf("1 번째 숫자를 입력하세요 : ");
	scanf("%d", &aa[0]);
	printf("2 번째 숫자를 입력하세요 : ");
	scanf("%d", &aa[1]);
	printf("3 번째 숫자를 입력하세요 : ");
	scanf("%d", &aa[2]);
	printf("4 번째 숫자를 입력하세요 : ");
	scanf("%d", &aa[3]);*/

	for (int i = 0; i < 4; i++) {
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &aa[i]);
	}
	sum = aa[0] + aa[1] + aa[2] + aa[3];
	printf(" 합계 ==> %d \n", sum);
	return 0;
}