#include <stdio.h>

void reset(void);
void count(void);


int main() {

	for(int i=1; i<=5; i++){
		reset(); //user created 함수 
		count();
	}

	return 0;
}

void reset(void) {
	auto int n = 1;
	printf("자동 지역변수 n :%d\n",n); //1
	n++; //1
	//2

}

void count(void) {
	static int s = 10;
	printf("\t정적 지역변수 s :%d\n", s);
	s++;
}