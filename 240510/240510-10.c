#include <stdio.h>

int main() {

	int i, sum=0;
	for (i = 1; i <= 1000; i++) {

		if (i % 3 == 0 || i % 7 == 0) {
			sum += i;
			//printf("%d+", i);
		}

	}

	printf("3의 배수와 7의 배수 합 %d", sum);

	return 0;
}