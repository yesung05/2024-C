#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int folhap(int num);

int main()
{

	int i, sum = 0;
	int snum, fnum, stpnum;
	printf("Start, End, Step 입력");
	scanf("%d %d %d", &snum, &fnum, &stpnum);


	for (i = snum; i <= fnum; i+=stpnum) {
		sum += i;
		
	}

	printf("%d부터 %d까지의 %d씩 증가한 합은 %d 입니다.\n", snum, fnum, stpnum, sum);

	printf("%d까지의 합은 %d 입니다.\n", fnum, folhap(fnum));//사용자 정의 함수로 만들기

	return 0;
}

int folhap(int num) {
	int val = num * (num + 1) / 2;
	return val;
} //함수
