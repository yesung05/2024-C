#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year;
	printf("�⵵ �Է� : ");
	scanf("%d", &year);

	if (year % 400 == 0) {
			printf("%d���� �����Դϴ�.\n", year);
	}
	else if (year % 4 == 0) {

		if (year % 100 != 0) {
			printf("%d���� �����Դϴ�.\n", year);
		}
		else
			printf("%d���� ������ �ƴմϴ�.\n", year);
	}
	else
		printf("%d���� ������ �ƴմϴ�.\n", year);


	return 0;
}