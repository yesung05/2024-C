#include <stdio.h>

int main() {
	int score[] = { 10,20,30 };
	printf("%p %p\n", score, (score+1));
	printf("%d %d\n", *score, *(score + 1));
	int a[3] = { 5,10,15 };
	int* p = a;
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d\n",*p++);
	printf("%d\n", *p);
	return 0;
}