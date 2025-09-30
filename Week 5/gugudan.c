// gugudan.c
#include <stdio.h>

void dan(int);

int main(void) {
	// 외부 for문은 그룹(단) for문이다
	for (int dan = 1; dan <= 9; dan++) {
		printf("*** %d dan: ***\n", dan);
		// 내부 for문은 곱하기(*) for문이다
		for (int num = 1; num <= 9; num++) {
			printf("%d * %d = %d\n", dan, num, dan * num);
		}
		// dan(d);
		printf("\n");
	}
	return 0;
}

void dan(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, step * i);
	}
}