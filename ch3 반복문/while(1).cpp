#include<stdio.h>
int main()
{
    int n = 5873;
    int cnt = 0;

    printf("%d은 ",n);
    
    while(n != 0){
        n /= 10;
        cnt++;
    }

    printf("%d자리의 수입니다.",cnt);
    return 0;
}