#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*int a, b, c, d, sum;
	printf("1 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("2 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("3 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &c);
	printf("4 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &d);
	sum = a + b + c + d;
	printf(" �հ� ==> %d \n", sum);*/

	int aa[4];
	int sum;
	/*printf("1 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &aa[0]);
	printf("2 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &aa[1]);
	printf("3 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &aa[2]);
	printf("4 ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &aa[3]);*/

	for (int i = 0; i < 4; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf("%d", &aa[i]);
	}
	sum = aa[0] + aa[1] + aa[2] + aa[3];
	printf(" �հ� ==> %d \n", sum);
	return 0;
}