#include<stdio.h>
void add(int* a,int b){
    *a+=b;
    b+=*a;
}
int main()
{
    int a=5,b=3;
    add(&a,b);
    printf("%d %d",a,b);
    return 0;
}