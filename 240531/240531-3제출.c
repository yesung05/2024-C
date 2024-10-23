#include <stdio.h> //printf등을 이용하기 위하여 Standard Input Output 헤더 포함

int rfunc(int); //함수 프로토타입, 매개변수는 int형으로 사용

int main(void) { //void는 없다는 뜻, 안 적어도 상관 없음

		printf("%d\n",rfunc(10)); //printf문을 사용하면서 rfunc함수 호출, 인자값 10

	return 0;

}

int rfunc(int n) { //함수 내용

	if (n == 1) { //매개변수의 값이 1이면 1 반환
		return 1;
	}
	else { //아닐경우, 매개변수 n과 매개변수n 에서 1을 뺀 값을 rfunc 호출하여 반환 
		return (n + rfunc(n - 1));
	}

}

/*rfunc(3) 실행시 예시
	if 문 - false
	else 실행 = return (3+rfunc(3-1))
	다시 rfunc 실행 = rfunc(2)
	rfunc(2)의 실행결과 는 2+rfunc(2+1)
	다시 rfunc 실행 = rfunc(1)
	if (n==1) - True, 1 반환;
	반환 값은 3+2+1, 6D

*/