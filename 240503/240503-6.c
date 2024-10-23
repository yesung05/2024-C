#include <stdio.h>

int main() {
	const int MAX = 5;

	int i, j;
	for (i = 1; i <= MAX; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
	printf("--------------------------\n");
	for (i = MAX; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}

	return 0;
}