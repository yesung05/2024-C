#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i,j;
	//for (;;) {
	//	printf("더할 두 수 입력 (중단은 Ctrl + C) : ");
	//	scanf("%d %d",&i, &j);
	//	printf("%d + %d = %d\n", i, j, i + j);
	//	
	//	
	//}
	int b;
	printf("#제2단# #제3단# #제4단# #제5단# #제6단# #제7단# #제8단# #제9단#\n\n");
	for (i = 1; i <= 9; i++) {	

		for (b = 2; b <= 9; b++) {
			 
			printf("%dX%-2d=%2d ", b, i, i * b);
		}
		puts("");
	}

	return 0;
}