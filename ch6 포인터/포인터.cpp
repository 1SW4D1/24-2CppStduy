#include<stdio.h>
int main()
{
    int a = 7;
    int* ptr = &a;

    printf("a�� �ּҰ� : %p\n",&a);
    printf("a�� �� : %d\n\n",a);

    printf("ptr�� �ּҰ� : %p\n",&ptr);
    printf("ptr�� �� : %p\n",ptr);
    printf("ptr�� ����Ű�� �ּ��� �� : %d\n\n",*ptr);

    a = 3;
    printf("a�� �� ���� ��, ptr�� ����Ű�� �ּ��� �� : %d",*ptr);
    return 0;
}