//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int data = 100; //�޸� ��򰡿� �ڸ���� data���� ����
	int* ptr; //int�� ������ �޸� �ּҸ� �����ϴ� ���� ����
	ptr = &data; //int�� ������ �޸� ������ �����ϴ� ������ data������ �ּҸ� ���� �����Ͽ� ����
	*ptr = 200;

	printf("data %p %d\n", &data, data);
	printf("data %p %p\n", &ptr, ptr);

	return 0;
}