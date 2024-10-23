#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num;
	//>19 미성년 
	printf("나이를 입력하세요: ");
	scanf("%d", &num);

	//printf("입력한 답은 %d이고\n", num);

	if (num>=20 && num<=39) {
		printf("청년입니다.\n");
	}
	else if (num>=40 && num<=59) {
		printf("중장년입니다.\n");
	}
	else {
		printf("기타입니다.\n");
	}

	printf("처리를 종료합니다\n");

	return 0;
}