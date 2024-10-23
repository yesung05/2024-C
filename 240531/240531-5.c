#include <stdio.h>

void sub(int param) {
	auto int local = 100;
	printf("\t%d %d\n", param, local);

}



int main(){
	auto int n = 10;
	printf("%d\n", n);
	for (int m = 0, sum = 0; m < 3; m++) {
		sum += m;
		printf("\t%d %d\n", m, sum);
	}
	printf("%d\n", n);
	sub(20);
	return 0;
}

