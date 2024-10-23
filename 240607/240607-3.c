#include <stdio.h>

int main(void)
{
	char c = '@';
	char* cptr = &c;
	int m = 100;
	int* iptr = &m;
	double x = 5.83;
	double* dptr = &x;

	printf("변수명   주소값            저장값\n");
	printf("-----------------------------------\n");
	//
	printf("%6c   %12p %5c\n",'c', cptr, c);
	printf("%6c   %12p %5i\n", 'm', iptr, m);
	printf("%6c   %12p %5lf\n", 'x', dptr, x);


	return 0;
}
