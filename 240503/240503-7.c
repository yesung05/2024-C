#include <stdio.h>

int main() {
	int i, k;

	for (i = 2; i <= 9; i++) {
		printf("%d´Ü : \n", i);
		for (k = 1; k <= 9; k++) {
			printf("%d * %d = %2d\n", i, k, i * k);
		}
		printf("\n");
	}



	return 0;
}