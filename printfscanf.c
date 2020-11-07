#include <stdio.h>
int main_printfscanf(void)
{	// 2-2 정수형 변수에 대한 예제
	/*t age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 2-3 주석
	//printf("1\n");
	//printf("2\n"); // 2는 범위에서 벗어나므로 주석처리
	//printf("3\n");

	// 2-4 실수형 변수에 대한 예제
	/* float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);  //  d 는 double 형 변수의 이름


	// %f 와 %lf의 차이가 뭔가요? 
	
	printf() 에서는 아무거나 쓰셔도 상관 없지만
	 scanf 에서는 %f 로 하면 float 형으로, %lf 로 하면
	 double 형으로 입력을 받게 됩니다. 둘은 메모리 상에
	 차지하는 공간 크기가 달라요. double 이 더 크답니다
	 
	 더 많은 자릿수의 실수를 표현하기 위해서는
	 float 대신 double 을 사용*/


	// 2-5 상수
	//const int YEAR = 2000;
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001; // 변경할 수 없다. %d는 정, %f 는 실수
	// %d
	// "이 위치에는 정수 형태의 값을 출력해줘 " 의미

	// 2-6 printf
	// 연산
	//int add = 3 + 7; // 10
	//printf("3+7 = %d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	// 2-7 scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); // & input 변수가 정의된 곳에 값을 입력받겠다.
	printf("입력값 : %d\n", input);*/

	/*Ctrl + k + c : 주석 설정
	Ctrl + k + u : 주석 해제*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한글자), 문자열(한 글자 이상의 여러글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str)); 
	printf("%s\n", str);*/

	//sizeof 크기명시 256이내문자만 받겠다.

	// 2-8 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름 ? 나이? 몸무게? 키 ? 범죄명 ?

	char name[256];
	printf("이름이 뭐에요?");
	scanf("%s", name, sizeof(name));

	int age;
	printf("나이는 몇살인가요 ?");
	scanf("%d", &age);

	float weight;
	printf("몸무게는 몇 kg ?");
	scanf("%f", &weight);

	double height;
	printf("키는 몇 cm ?");
	scanf("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀나요 ?");
	scanf("%s", what, sizeof(what));

	// 조서 내용 출력

	printf("\n\n ---- 범죄자 정보 ---- \n\n");
	printf(" 이름            :       %s\n", name);
	printf(" 나이            :       %d\n", age);
	printf(" 몸무게          :       %.2f\n", weight);
	printf(" 키              :       %.2lf\n", height);
	printf(" 범죄명          :       %s\n", what);


	return 0;
}