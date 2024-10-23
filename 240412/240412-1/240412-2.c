#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("정수를 두개 입력하세요 >> ");
	scanf("%d %d", &a, &b);
	
	printf("두 숫자중 큰 값은 : %d\n", (a > b) ? a : b);
	printf("두 숫자중 작은 값은 : %d\n", (a < b) ? a : b);
	printf("절대값은 : %d\n", (a > 0) ? a : -a);
	printf("a는 짝수인가? %s\n", ((a % 2) == 0) ? "짝수" : "홀수");
	((a % 2) == 0) ? printf("짝수\n") : printf("홀수\n");
	return 0;
}







//int main()
//{
//	int amt = 0; //amount
//	int free = 10;
//	printf("총 금액을 입력하세요 : ");
//	scanf("%d", &amt);
//
//	int sale = (amt>=10000) && (free++ >= 10);
//
//	printf("할인: %d 쿠폰 수: %d \n", sale, free); //0 9
//
//	return 0;
//}