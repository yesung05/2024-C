#include <stdio.h>
#include <stdlib.h> //Standard Library rand()�̿� ���� ���̺귯��
#include <time.h> //time()�̿� ���� ���̺귯��

#define MAX 100

int main(void) {

	srand((long)time(NULL));
	printf("%ld",(long)time(NULL));
	printf("1~%5d ������ ���� 6��:\n", MAX);
	for (int i = 0; i < 6; i++) {
		printf("%5d ", rand() % MAX + 1); //������ �켱���� ���� % ����
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

