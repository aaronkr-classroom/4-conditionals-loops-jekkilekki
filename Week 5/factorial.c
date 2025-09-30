// factorial.c
#include <stdio.h>

int factorial(int);

int main(void) {
	int num = 10, // 5 * 4 * 3 * 2 * 1
		result = factorial(num);

	printf("%d! = %d", num, result);
	return 0;
}

// 재귀적(recursive) 함수
int factorial(int num) {
	if (num <= 1) return 1;
	else return num * factorial(num - 1);
}