#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i,j;
	//for (;;) {
	//	printf("���� �� �� �Է� (�ߴ��� Ctrl + C) : ");
	//	scanf("%d %d",&i, &j);
	//	printf("%d + %d = %d\n", i, j, i + j);
	//	
	//	
	//}
	int b;
	printf("#��2��# #��3��# #��4��# #��5��# #��6��# #��7��# #��8��# #��9��#\n\n");
	for (i = 1; i <= 9; i++) {	

		for (b = 2; b <= 9; b++) {
			 
			printf("%dX%-2d=%2d ", b, i, i * b);
		}
		puts("");
	}

	return 0;
}