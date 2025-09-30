// 369.c
// 369게임 작성해주세요.
// 1. 조건문
// 2. 반복문
// 3, 6, 9 있으면 '짝' 출력해주세요
// 아니면 숫자 출력해주세요.
#include <stdio.h>

void check369(int); //  3,6,9 있으면 '짝' 출력 아니면 숫자

int main(void) {
	int num = 0;
	printf("369게임 환영합니다!\n");
	printf("언제까지 합니까? >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		check369(i);
		printf(" ");
	}

	return 0;
}

void check369(int num) {
	int contains369 = 0; // T/F
	int temp = num;

	while (temp > 0) {
		int digit = temp % 10; 

		switch (digit) {
		case 3:
		case 6:
		case 9:
			contains369 = 1;
		}

		temp = temp / 10; // 다음 숫자로 이동
	}

	if (contains369) printf("짝!~ ");
	else printf("%d ", num);
}
