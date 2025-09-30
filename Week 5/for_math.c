// for_math.c
#include <stdio.h>

int for_sum(int);
int for_mul(int);

int main(void) {
	int sum = 0,
		mul = 1;

	sum = for_sum(sum); // 0을 주고 뭐를 받아요?
	printf("Sum result: num = 6, sum = %d\n", sum);

	mul = for_mul(mul); // 1을 주고 뭐를 받아요?
	printf("Mul result: num = 6, mul = %d\n", mul);

	return 0;
}

int for_sum(int sum) {
	for (int num = 1; num <= 5; num++) {
		// 합산하기 전 sum 값을 사용하여 'num + sum = '이라고 출력함
		printf("num(%d) + sum(%d) = ", num, sum);
		// sum에 num을 더함
		sum = sum + num;
		// 더한 후 sum 값을 출력하고 줄을 바꿈
		printf("%d\n", sum);
	}
	return sum;
}

int for_mul(int mul) {
	for (int num = 1; num <= 5; num++) {
		// 곱하기 전 mul 값을 사용하여 'num * mul = '이라고 출력함
		printf("num(%d) * mul(%d) = ", num, mul);
		// mul에 num을 곱함
		mul = mul * num;
		// 곱한 후 mul 값을 출력하고 줄을 바꿈
		printf("%d\n", mul);
	}
	return mul;
}