#include <stdio.h>

int max(int a, int b, int c);

int main(void) {
	printf("%d\n", max(9, 4, 19));

	return 0;
}

int max(int a, int b, int c) {
	int max = a; //�ǹ� ����
	int max2 = (b > c) ? b : c; //max2�� b�� c �� �� ū �� ����
	//���� a��  b�� c�� ū ������ ũ�ų� ������ a ��ȯ �ƴϸ� max2 ��ȯ
	if (a >= max2) {
		return a;
	}
	else{
		return max2;
	}
}