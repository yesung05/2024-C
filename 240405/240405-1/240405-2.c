#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ʈ ������ �� ��Ʈ�� ���� ���������� �ű�� ������
int main()
{
	int a = 0;
	printf("%d\n", a++);
	a = 0;
	printf("%d\n", ++a);
	if ('1' == 1) {
		printf("'1'�� 1�� �½��ϴ�.\n");
	}
	else {
		printf("'1'�� 1�� �ƴմϴ�.\n");
	}
	return 0;
}