#include <stdio.h>

//선언
void p(int num);

void function_without_return();
int function_with_return();

void function_without_params();
void function_with_params(int num1,int num2,int num3);

int apple(int total, int ate);//전체 total 개에서 ate 개를 먹고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function()
{
    // // 5-2 function
    // // 계산기

    // int num = 2;
    // //printf("num 은 %d 입니다.\n",num); //2
    // p(num);

    // // 2+3 은 ?
    // num = num + 3; // num += 3;
    // //printf("num 은 %d 입니다.\n", num); //5
    // p(num);

    // // 5-1 은 ?
    // num -= 1; // num = num - 1;
    // //printf("num 은 %d 입니다.\n", num); //4
    // p(num);

    // // 4 x 3 은?
    // num *= 3;
    // // printf("num 은 %d 입니다.\n",num); //12
    // p(num);

    // // 12/6 은 ?
    // num /= 6;
    // // printf("num 은 %d 입니다.\n",num); //2
    // p(num);
    
    //함수 종류
    //5-4 반환값이 없는 함수
    //function_without_return();

    //5-5 반환값이 있는 함수
    // int ret = function_with_return();
    // p(ret);

    //5-6 파라미터(전달값)가 없는 함수
    //function_with_params();

    //5-7 파라미터 (전달값)가 있는 함수
    // function_with_params(36, 34, 36);

    //5-8 파라미터(전달값)도 받고, 반환값이 있는 함수
    // int ret = apple (5, 2); // 사과 5개중 2개를 먹었다.
    // {
    //     printf("사과 5개중에 2개를 먹으면? %d 개가 남아요.\n");
    // }

    //5-8 심화
    // {
    //     printf("사과 %d개중에 %d개를 먹으면? %d개가 남아요.\n ",10, 5, apple(10,5));
    // }
    
// 5-9 함수를 이용한 계산기
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);


    return 0;
}

// 정의
 void p(int num)
 {
     printf("num 은 %d 입니다.\n",num);
}

// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?
// void 함수이름(int num1, int num2, char c, float b)
// {

// }

    // void function_without_return()
    // {
    //     printf("반환값이 없는 함수입니다.\n");
    // }

    int function_with_return()
    {
        printf("반환값이 있는 함수입니다.\n");
        return 10;
    }

    void function_without_params()
    {
        printf("전달값이 없는 함수입니다.\n");
    }
    void function_with_params(int num1,int num2,int num3)
{
        printf("전달값이 있는 함수이며, \n %d, %d, %d 입니다.\n",num1, num2, num3);
}
    
int apple(int total, int ate)        
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}


int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}
