#include <stdio.h>

int summary(int point[], int size);

int main() {
	int point[] = { 10,20,320,40,50 };
	int arrsize = sizeof(point);
	printf("�迭 ũ�� : %d \n", arrsize);
	int arrlen = sizeof(point) / sizeof(int);
	printf("�迭 ���� : %d \n", arrlen);

	int sum = 0;
	for (int i = 0; i < arrlen; i++) {
		sum += point[i];
	}
	printf("���ο��� ���� ���� %d\n", sum);
	printf("�ۼ��� �Լ��� ȣ���� ��� %d\n", summary(point, arrlen));
	return 0;
}

int summary(int ary[], int size) {
	int sum = 0;
	printf("�Լ����� ���� ��ü ũ�� %d\n", (int)sizeof(ary));
	for (int i = 0; i < size; i++) {
		sum += ary[i];
	}
	return sum;

}