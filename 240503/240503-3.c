#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, sum=0;
	int fnum;
	scanf("%d", &fnum);
	//나도 그게 걱정이야..
	// n(n+1)/2 n까지의 합 구하는 식
	for (i = 1; i < fnum+1; i++) {
		printf("i의 숫자는 %d 입니다.\n",i);

	}
	for (int b = 10; b > 0; b--) {
		printf("b의 숫자는 %d 입니다.\n",b);
	}
	printf("%d\n",sum);
	printf("%d\n", fnum * (fnum + 1) / 2);
	//증감연산자 사용 시 주의! 기존에 메모리에 사용하던 값이 남아 있어서 쓰레기 값이라고 함
	for (i = 1; i < 4; i++) {
		printf("i의 숫자는 %d이다.", i);
		printf("연습입니다. \n");

	}

	for (i = 1; i < 4; i++)
		printf("i의 숫자는 %d이다.", i);
		printf("연습입니다. \n");


	return 0;
}