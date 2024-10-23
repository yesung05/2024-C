#include <stdio.h>



int cacao(int a, int b); //<--이거 수정 안한것이 이유 void cacao(); 가 아닌 int cacao(); 를 적어야 함
//int cacao(int, int);
int main() {

	int a = 10, b = 20;
	int sum = 0;
	printf("함수 연습합니다 \n");
	sum = cacao(a,b); //함수 호출
	printf("두 숫자의 합은 %d 입니다. \n",sum);
	return 0;
}

int cacao(int a, int b) {
	int sum = 0;
	sum = a + b;
	return sum;
}