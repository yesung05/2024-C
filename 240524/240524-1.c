#include <stdio.h>



int cacao(int a, int b); //<--�̰� ���� ���Ѱ��� ���� void cacao(); �� �ƴ� int cacao(); �� ����� ��
//int cacao(int, int);
int main() {

	int a = 10, b = 20;
	int sum = 0;
	printf("�Լ� �����մϴ� \n");
	sum = cacao(a,b); //�Լ� ȣ��
	printf("�� ������ ���� %d �Դϴ�. \n",sum);
	return 0;
}

int cacao(int a, int b) {
	int sum = 0;
	sum = a + b;
	return sum;
}