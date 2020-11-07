#include <stdio.h>
int main()

{ char name;

printf("이름이 뭐에요?");

scanf("%s", &name);

int age;

printf("나이는 몇살인가요 ?");

scanf("%d", &age);

float weight;

printf("몸무게는 몇 kg ?");

scanf("%f", &weight);

double height;

printf("키는 몇 cm ?");

scanf("%lf", &height);


char what;

printf("무슨 범죄를 저질렀나요 ?");

scanf("%s", &what);


// 조서 내용 출력


printf("\n\n ---- 범죄자 정보 ---- \n\n");

printf(" 이름 : %s\n", &name);

printf(" 나이 : %d\n", age);

printf(" 몸무게 : %.2f\n", weight);

printf(" 키 : %.2lf\n", height);

printf(" 범죄명 : %s\n", &what);


return 0;

}