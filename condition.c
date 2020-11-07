#include <stdio.h>

int main(void)
{
  //4-2 if else

	// // 버스를 탄다고 가정 학생/일반인으로 구분 (일반인 : 20세)
	// int age = 15;
	// if (age >= 20)
  // {
	// 	printf("일반인 입니다");
  // }
  // else
	// {
  // 	printf("학생 입니다");
  // }

// 초딩 (8~13) / 중딩(14~16) / 고딩(17~19) 으로 나누면?
// if / else if / else

  int age = 35;
  if (age >= 8 && age <= 13)
  {
      printf("초딩 입니다.\n");
  }
  else if (age >=14 && age <= 16)
  {
      printf("중딩 입니다.\n");
  }
  else if (age >= 17 && age <= 19)
  {
    printf("고딩 입니다.\n");
  }
  else
  {
    printf("학생이 아닌가 봐요.\n");
  }

  return 0;
}
