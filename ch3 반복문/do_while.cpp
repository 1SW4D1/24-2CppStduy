#include<stdio.h>
int main()
{
    int n = 10;
    do{
        printf("%d\n",n *= 10);
    }while(n != 10 && n<1000);

    n = 10;
    while(n != 10 && n<1000){
        printf("%d\n",n *= 10);
    }
    return 0;
}