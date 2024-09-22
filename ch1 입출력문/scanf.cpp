#include<stdio.h>
int main()
{
    int a;
    char b;
    double c;

    printf("문자형 변수 b 입력 : ");
    scanf("%c", &b);
    printf("정수형 변수 a 입력 : ");
    scanf("%d", &a);
    printf("실수형 변수 c 입력 : ");
    scanf("%lf", &c);

    printf("\n");
    printf("정수형 변수 a 출력 : %d\n", a);
    printf("문자형 변수 b 출력 : %c\n", b);
    printf("실수형 변수 c 출력 : %lf", c);
    return 0;
}