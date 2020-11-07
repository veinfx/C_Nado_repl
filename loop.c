#include <stdio.h>

int main_loop(void) {
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");
	// printf("Hello World\n");

	//++ 쁠쁠 3-2
	// int a = 10;
	// printf("a 는 %d\n", a);

	// a++;
	// printf("a 는 %d\n", a);

	// a++;
	// printf("a 는 %d\n", a);

	// int b =20;
	// // b = b + 1;  복습할것!
	// printf("b 는 %d\n", ++b);
	// printf("b 는 %d\n", b++);
	// printf("b 는 %d\n", b);

	// int i =1;
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);
	// printf("Hello Man %d\n", i++);

	// 3-3 반복문 , for, whlie, do whlie

	// for(선언;조건;증감) {}

	// for (int i = 1; i <= 10; i++)

	// {
	// 	printf("Hello Man %d\n", i);
	// }

	// [3-4] whlie (조건) {}

	// int i = 1;
	// while (i <=10)
	// {
	//   printf("Hello Man %d\n", i++);
	//   //i++;

	// }

	// [3-5] do {   } while(조건);

	// int i = 1;
	// do {
	//     printf("Hello Man %d\n", i++);
	// }

	//   while(i<=10);

	// 3-6 이중 반복문 
  // for (int i = 1; i <= 3; i++)
  // {
  //     printf ("첫 번째 반복문 : %d\n", i);
    
  //   for(int j =1; j <= 5; j++)
  //   {
  //       printf ("   두 번째 반복문 : %d\n", j);
  //   }

  // }


// 3-6 구구단
// 2 x 1 = 2
// 2 x 2 = 4
// .. 9 x 9 = 81 

// for(int i = 2; i<= 9; i++)
// {
//   printf("  %d 단\n", i);

//   for(int j = 1; j<=9; j++)
//   printf("%d x %d = %d\n", i, j, i*j);
// }

//3-7 이중반복문 파헤치기
/*
*
**
***
****
*****
******
*/

// for(int i=0; i <6; i++)
//   {
//     for(int j= 0; j<=i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }

//3-8 이중반복문 (거꾸로 별)
/* 
       *
      **
     ***
    ****
   *****
  ******   
*/
/* 
   SSSSS*
   SSSS**
   SSS***
   SS****
   S*****
   ******   
*/

// for(int i=0; i < 6; i++)
// {
//   for(int s=i; s < 6-1; s++)
//     printf(" ");
//     {
//       for (int j = 0; j <=i; j++)
//         printf("*");
//     }
//   printf("\n");
// }


//3-9 피라미드 쌓기 프로젝트
/*
    *
   ***
  *****
 *******
*********
*/
/*
SSSS*
SSS***
SS*****
S*******
*********
*/
int floor;
printf("피라미드를 몇 층으로 쌓을 것이여?\n");
scanf("%d", &floor);

for(int i = 0; i < floor; i++)
{
  for(int s = i; s < floor-1; s++)
  printf(" "); //S를 띄워쓰기로~
{
  for(int j =0; j< i*2+1; j++)  //for(int j =0; 조건; j++) 
  printf("*");
}
printf ("\n");
}

// 이중반복문 << 어렵노 ;복습할것!
	return 0;
}
// 피라미드 복습할것 !