#include <stdio.h>
#define SIZE 5

int main() {
	int score[SIZE]; //��ũ�� ��� ����ϸ� �ش� ���� �ϰ� ���� ����
	
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//score[3]�� �� ����X ������ �� ����
	score[4] = 91;
	//score[5] = 10; �������� 
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", score[i]);
	}
	puts("");
	return 0;
}