#include <stdio.h>

int factorial(int n);

int main() {

	//����Ʈ���� ���� �����
	printf("%d", factorial(5));

	return 0;
}

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	//���� �׷� ���ɼ��� �ִٰ�?
	return n * factorial(n - 1);
}
//����Լ� �ϸ� ���� ����