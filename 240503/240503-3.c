#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, sum=0;
	int fnum;
	scanf("%d", &fnum);
	//���� �װ� �����̾�..
	// n(n+1)/2 n������ �� ���ϴ� ��
	for (i = 1; i < fnum+1; i++) {
		printf("i�� ���ڴ� %d �Դϴ�.\n",i);

	}
	for (int b = 10; b > 0; b--) {
		printf("b�� ���ڴ� %d �Դϴ�.\n",b);
	}
	printf("%d\n",sum);
	printf("%d\n", fnum * (fnum + 1) / 2);
	//���������� ��� �� ����! ������ �޸𸮿� ����ϴ� ���� ���� �־ ������ ���̶�� ��
	for (i = 1; i < 4; i++) {
		printf("i�� ���ڴ� %d�̴�.", i);
		printf("�����Դϴ�. \n");

	}

	for (i = 1; i < 4; i++)
		printf("i�� ���ڴ� %d�̴�.", i);
		printf("�����Դϴ�. \n");


	return 0;
}