#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char symbol;
	printf("ù ��° ���� �Է��ϼ���: ");
	scanf("%d", &a);

	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf(" %c", &symbol);

	printf("�� ��° ���� �Է��ϼ���: ");
	scanf("%d", &b);
	//if(symbol == '������')�ε� ������.
	switch (symbol) {
	case '+':
		printf("%d + %d = %d �Դϴ�.\n",a,b,a+b);
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�.\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�.\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %lf �Դϴ�.\n", a, b, a / (double)b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�.\n", a, b, a % b); //%%�� �ؾ� %�� ���������� �ͷ� ��.
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
		break;
	}
	return 0;
}