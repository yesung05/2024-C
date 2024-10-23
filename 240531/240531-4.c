#include <stdio.h>
#include <stdlib.h> //Standard Library rand()이용 위한 라이브러리
#include <time.h> //time()이용 위한 라이브러리

#define MAX 100

int main(void) {

	srand((long)time(NULL));
	printf("%ld",(long)time(NULL));
	printf("1~%5d 사이의 난수 6개:\n", MAX);
	for (int i = 0; i < 6; i++) {
		printf("%5d ", rand() % MAX + 1); //연산자 우선순위 따라 % 먼저
	}
	puts("");
	return 0;
}



/*int main(void) {


	for (int i=0; i < 10; i++) {
		printf("%5d ", rand());
	}
	puts("");

	return 0;
}*/

