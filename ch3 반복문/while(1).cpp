#include<stdio.h>
int main()
{
    int n = 5873;
    int cnt = 0;

    printf("%d�� ",n);
    
    while(n != 0){
        n /= 10;
        cnt++;
    }

    printf("%d�ڸ��� ���Դϴ�.",cnt);
    return 0;
}