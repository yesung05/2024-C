#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double cm = 0;

	printf("길이를 센티미터로 입력 (소수) >> ");
	scanf("%lf", &cm);

	printf("%lf 센티미터:%7.3lf 피트", cm, cm / 30.48);
	//printf("%lf 센티미터: %.3lf 피트", cm, cm / 30.48); 결과는 같음

	return 0;
}