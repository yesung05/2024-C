#include <stdio.h>

int main(void) {

	int i = 100;
	char c = 'a';

	int* pi = &i;
	char* pc = &c;
	printf("�������� ���: %d %c\n", *pi, *pc);
	*pi = 300;
	*pc = 'Q';
	printf("�������� ���: %d %c\n", i, c);

	return 0;
}