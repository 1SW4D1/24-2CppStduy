#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("for문이 종료된 후 i의 값은 %d이다.",i);
    return 0;
}