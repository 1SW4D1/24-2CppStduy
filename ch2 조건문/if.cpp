#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a < 100){
        printf("a�� 100���� �۽��ϴ�.\n");
    }
    else if(a == 100){
        printf("a�� 100�� �����ϴ�.\n");
    }else{
        printf("a�� 100���� Ů�ϴ�.\n");
    }
    return 0;
}