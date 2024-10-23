#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffeetype(int);

void main()
{
	int coffee;

	printf("어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);

	coffeetype(coffee);

}

void coffeetype(int coffee) {
	//커피 종류를 여러번 선택하였을 때, 출력도 여러번 나와야 함.

	printf("\n# 1. 뜨거운 물을 준비한다\n");
	printf("# 2. 종이컵을 준비한다\n");

	switch (coffee)
	{
	case 1: printf("# 3. 보통커피를 탄다\n"); break;
	case 2: printf("# 3. 설탕커피를 탄다\n"); break;
	case 3: printf("# 3. 블랙커피를 탄다\n"); break;
	default: printf("# 3. 아무거나 탄다\n"); break;
	}

	printf("# 4. 물을 붓는다\n");
	printf("# 5. 스푼으로 저어서 녹인다\n\n");

	printf(" 커피 여기 있습니다.\n\n");
}
