#include<stdio.h>
int main()
{
    int a;
    char b;
    double c;

    printf("������ ���� b �Է� : ");
    scanf("%c", &b);
    printf("������ ���� a �Է� : ");
    scanf("%d", &a);
    printf("�Ǽ��� ���� c �Է� : ");
    scanf("%lf", &c);

    printf("\n");
    printf("������ ���� a ��� : %d\n", a);
    printf("������ ���� b ��� : %c\n", b);
    printf("�Ǽ��� ���� c ��� : %lf", c);
    return 0;
}