#include <stdio.h>
#define ROWSIZE 2
#define COLSIZE 3


int main() {
	int td[][3] = { {1},{1,2,3} };
	printf("반복문 for을 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++) {
			printf("%d ", td[i][j]);
		}
		puts("");
	}



	return 0;
}