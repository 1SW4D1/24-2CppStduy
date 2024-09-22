#include<stdio.h>
int main()
{
    int n = 5873;
    int cnt=1;
    while(n != 0){
        printf("%d의 자리수는 %d\n",cnt,n%10);
        n /= 10;
        cnt *= 10;
    }
    return 0;
}