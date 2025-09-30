// chp8_hw.c
// 슬라이드 47
// Q1, Q2, Q3 작성하고 결과가 콘솔에서 표시하세요.
// 30분 이내 하세요.
// 4시에 반복문 슬라이드를 볼게요.

#include <stdio.h>

void print_stars(int);
void q1(int);		// 음성/양성 확인
int q2(int, int);   // 양성으로 변경
void q3(int);		// switch

int main(void) {
	int result = -5;

	print_stars(20);
	printf("Chp 8 HW:");
	print_stars(20);

	q1(result);
	q2(result, 1);
	q3(result);

	return 0;
}

void print_stars(int num) {
	printf("\n");
	for (int i = 0; i <= num; i++)
		printf("*");
	printf("\n");
}

void q1(int result) {
	if (result < 0) {
		result = result * (-1);
		printf("Q1: result는 음성이었다~\n");
	}
	else {
		printf("Q1: result는 양성이었다~\n");
	}
}

int q2(int result, int print) {
	result = result < 0 ? result * -1 : result;
	if (print)
		printf("Q2: result: %d\n", result);
	return result;
}

void q3(int result) {
	// 먼저 양성으로 변경하기
	result = q2(result, 0); // -5 대신 5 필요함
	switch (result) {
	case 6:
		result = 0; break;
	case 5: // 여기
		result = 1;
	case 4:
		result = result * 10; break;
	}
	printf("Q3: result: %d\n", result); // 10 나옴
}