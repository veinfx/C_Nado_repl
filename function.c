#include <stdio.h>

//선언
void p(int num);

void function_without_return();
int function_with_return();
    
int main()
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
    int ret = function_with_return();
    p(ret);

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

    

