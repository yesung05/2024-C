#include <stdio.h>

void reset(void);
void count(void);


int main() {

	for(int i=1; i<=5; i++){
		reset(); //user created �Լ� 
		count();
	}

	return 0;
}

void reset(void) {
	auto int n = 1;
	printf("�ڵ� �������� n :%d\n",n); //1
	n++; //1
	//2

}

void count(void) {
	static int s = 10;
	printf("\t���� �������� s :%d\n", s);
	s++;
}