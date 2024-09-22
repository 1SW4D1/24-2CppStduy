#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a < 100){
        printf("a는 100보다 작습니다.\n");
    }
    else if(a == 100){
        printf("a는 100과 같습니다.\n");
    }else{
        printf("a는 100보다 큽니다.\n");
    }
    return 0;
}