#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int folhap(int num);

int main()
{

	int i, sum = 0;
	int snum, fnum, stpnum;
	printf("Start, End, Step �Է�");
	scanf("%d %d %d", &snum, &fnum, &stpnum);


	for (i = snum; i <= fnum; i+=stpnum) {
		sum += i;
		
	}

	printf("%d���� %d������ %d�� ������ ���� %d �Դϴ�.\n", snum, fnum, stpnum, sum);

	printf("%d������ ���� %d �Դϴ�.\n", fnum, folhap(fnum));//����� ���� �Լ��� �����

	return 0;
}

int folhap(int num) {
	int val = num * (num + 1) / 2;
	return val;
} //�Լ�
