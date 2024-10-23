#include <stdio.h>

int max(int a, int b, int c);

int main(void) {
	printf("%d\n", max(9, 4, 19));

	return 0;
}

int max(int a, int b, int c) {
	int max = a; //의미 없음
	int max2 = (b > c) ? b : c; //max2에 b와 c 중 더 큰 수 저장
	//만약 a가  b와 c중 큰 수보다 크거나 같으면 a 반환 아니면 max2 반환
	if (a >= max2) {
		return a;
	}
	else{
		return max2;
	}
}