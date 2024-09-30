#include<stdio.h>
void add(int a,int b){
    printf("add: %d\n",a+b);
}
int minus(int a,int b){
    return a-b;
}
int mult(int a,int b){
    a*=b;
    return a;
}
double div(int a,int b){
    return (double)a/b;
}

int main()
{
    int a=9,b=5;
    add(a,b);
    printf("minus: %d\n",minus(a,b));
    printf("mult: %d\n",mult(a,b));
    printf("div: %lf\n",div(a,b));
    return 0;
}