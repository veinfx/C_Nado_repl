#include <stdio.h>
#include <time.h>

int main_condition(void)
{ // condition 조건문
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

/*  int age = 35;
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
  }*/

//4-3  break / continue
// 1번부터 30번가지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
 
 /*for (int i = 1; i <= 30; i++)
 {
    if (i >= 6)
    {
        printf("나머지 학생은 집에가세요 \n");
        break; //조건만족할 때 탈출
    }
     printf("%d 번 학생은 조별 발표 중비를 하세요\n", i);
 } */

// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
/*
for(int i = 1; i <= 30; i++)
{
    if( i >=6 && i <= 10)
    {
        if(i ==7)  // i == 7은 i랑 7이랑 똑같은지 아닌지 확인하는 것
        {
            printf("%d번 학생은 결석 입니다.\n",i);
        continue; //조건만족하면 동작하고 다음으로 넘어간다
        }
        printf("%d번 학생은 조별 발표를 하세요.\n",i);
        {

        }
    }
}*/

// 4-4 And && // || Or 연산
/*  
    int a = 10;
    int b = 11;
    int c = 13;
    int d = 13;
    if (a == b || c == d)
        {
            printf("a와 b ,혹은  c와 d의 값이  같습니다.\n");
        }
    else{
        printf("값이 서로 달라요\n");
    }*/

//4-5 Switch Case

// 가위 0 바위 1 보 2
/*    srand(time(NULL));
    int i = rand() % 3; // 0 ~ 2 반환
    if (i == 0)
    {
        printf("가위\n");
    }
    else if (i == 1)
        {
            printf("바위\n");
        }
    else if (i == 2)
    {
        printf("보\n");
    }
    else
    {
        printf("몰라요\n");
    }*/

// 다른방법 Switch case마다  break; 해야한다;
    // srand(time(NULL));
    // // int i = rand() % 3; // 0 ~ 2 반환
    // int i = 1;
    // switch (i)

    // {
    //     case 0: printf("가위\n"); break;
    //     case 1: printf("바위\n"); break;
    //     case 2: printf("보\n"); break;
    //     default: printf("몰라요\n"); break;
    // }

    // int age = 17;
    // switch (age)
    // {
    // case 8:
    // case 9:
    // case 10:
    // case 11:
    // case 12:
    // case 13:printf("초딩 입니다.\n");break;
    // case 14:
    // case 15:
    // case 16:printf("중딩 입니다.\n");break;
    // case 17:
    // case 18:
    // case 19:printf("고딩 입니다.\n");break;
    // default : printf("학생이 아닌가 봐요.\n");break;
    // }

    // 4-6 프로젝트 Up and Down
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1-100 사이의 숫자
    printf("숫자 : %d\n", num);
    int answer = 0; //정답  //선언과 동시에 초기화
    int chance = 5; //기회
    while (1) // 1 : 참 , 0 :거짓
    {
        printf("남은 기회 %d 번 \n", chance--);
        printf("숫자를 맞춰 보세요. (1~100) : ");
        scanf("%d", &answer);

        if(answer > num)
        {
            printf("Down \n\n");
        }
        else if(answer < num)
        {
            printf("Up \n\n");
        }
        else if(answer == num)
        {
            printf("정답입니다. \n\n");
            break;
        }
        else
        {
            printf("알 수 없는 오류가 발생 하였습니다.\n\n");
        }
        if (chance == 0)
        {
            printf("모든 기회를 다 사용 하였습니다. 실패\n\n");
            break;    
        }
    }

  return 0;
}