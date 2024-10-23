#include <stdio.h>
#define SIZE 5

int main() {
	int score[SIZE]; //매크로 상수 사용하면 해당 값을 일괄 수정 가능
	
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//score[3]은 값 지정X 쓰레기 값 함유
	score[4] = 91;
	//score[5] = 10; 문법오류 
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", score[i]);
	}
	puts("");
	return 0;
}