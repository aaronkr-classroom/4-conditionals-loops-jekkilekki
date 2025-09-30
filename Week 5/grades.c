// grades.c
#include <stdio.h>

char if_grade(int);
char switch_grade(int);

int main(void) {
	int score = 121;
	char grade = switch_grade(score);

	printf("Grade: %d%%, %c", score, grade);

	return 0;
}

// 슬라이드 39의 코드 (하지만 = 대신 return 사용함)
char if_grade(int score) {
	if (score >= 90) 
		return 'A';
	else if (score >= 80) 
		return 'B';
	else if (score >= 70) 
		return 'C';
	else if (score >= 60) 
		return 'D';
	else 
		return 'F';
}

// 슬라이드 45의 코드 (하지만 = 대신 return 사용함)
char switch_grade(int score) {
	switch (score / 10) { // 110 / 10 = 11
	case 12: 
	case 11:
	case 10:
	case 9: return 'A'; // return 사용하면 break문 필요없다.
	case 8: return 'B'; 
	case 7: return 'C';
	case 6: return 'D';
	default: return 'F';
	}
}