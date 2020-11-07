#include <stdio.h>

int main(void)
{
	// 버스를 탄다고 가정 학생 / 일반인으로 구분 (일반인 : 20세)
	int age = 15;
	if (age >= 20)
		printf("일반인 입니다");
	else
		printf("학생 입니다");
	return 0;
}