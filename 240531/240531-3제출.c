#include <stdio.h> //printf���� �̿��ϱ� ���Ͽ� Standard Input Output ��� ����

int rfunc(int); //�Լ� ������Ÿ��, �Ű������� int������ ���

int main(void) { //void�� ���ٴ� ��, �� ��� ��� ����

		printf("%d\n",rfunc(10)); //printf���� ����ϸ鼭 rfunc�Լ� ȣ��, ���ڰ� 10

	return 0;

}

int rfunc(int n) { //�Լ� ����

	if (n == 1) { //�Ű������� ���� 1�̸� 1 ��ȯ
		return 1;
	}
	else { //�ƴҰ��, �Ű����� n�� �Ű�����n ���� 1�� �� ���� rfunc ȣ���Ͽ� ��ȯ 
		return (n + rfunc(n - 1));
	}

}

/*rfunc(3) ����� ����
	if �� - false
	else ���� = return (3+rfunc(3-1))
	�ٽ� rfunc ���� = rfunc(2)
	rfunc(2)�� ������ �� 2+rfunc(2+1)
	�ٽ� rfunc ���� = rfunc(1)
	if (n==1) - True, 1 ��ȯ;
	��ȯ ���� 3+2+1, 6D

*/