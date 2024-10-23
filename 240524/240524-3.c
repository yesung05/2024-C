#include <stdio.h>

int summary(int point[], int size);

int main() {
	int point[] = { 10,20,320,40,50 };
	int arrsize = sizeof(point);
	printf("배열 크기 : %d \n", arrsize);
	int arrlen = sizeof(point) / sizeof(int);
	printf("배열 길이 : %d \n", arrlen);

	int sum = 0;
	for (int i = 0; i < arrlen; i++) {
		sum += point[i];
	}
	printf("메인에서 구한 합은 %d\n", sum);
	printf("작성한 함수로 호출한 결과 %d\n", summary(point, arrlen));
	return 0;
}

int summary(int ary[], int size) {
	int sum = 0;
	printf("함수에서 베열 전체 크기 %d\n", (int)sizeof(ary));
	for (int i = 0; i < size; i++) {
		sum += ary[i];
	}
	return sum;

}