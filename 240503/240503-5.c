#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, b;
	/*printf("���ϴ� ���� �Է��Ͻÿ�.:");
	scanf("%d", &dan);
	for (i = 2; i <= 9; i++) {
		printf("%d * %d = %2d \n", dan, i, dan * i);
	}*/
	for (i = 2; i <= 9; i++) {
		for (b = 2; b <= 9; b++) {
			printf("%d�� \n\n", b);
			printf("%d * %d = %2d ", b, i, b * i);
		}
		printf("\n");
	}
	return 0;
}