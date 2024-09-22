#include<stdio.h>
int main()
{
    int a = 7;
    int* ptr = &a;

    printf("a의 주소값 : %p\n",&a);
    printf("a의 값 : %d\n\n",a);

    printf("ptr의 주소값 : %p\n",&ptr);
    printf("ptr의 값 : %p\n",ptr);
    printf("ptr이 가르키는 주소의 값 : %d\n\n",*ptr);

    a = 3;
    printf("a의 값 변경 후, ptr이 가르키는 주소의 값 : %d",*ptr);
    return 0;
}