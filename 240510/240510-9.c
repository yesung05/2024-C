#include <stdio.h>

int main() {
	int i;
	for (i = 0; i < 128; i++) {
		if (i % 16 == 0) {
			printf("------------------\n");
			printf("10진수 16진수 문자\n");
			printf("------------------\n");
		}
		printf("%5d %5x %5c\n", i, i, i);
	}



	return 0;
}