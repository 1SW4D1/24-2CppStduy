#include<stdio.h>
#include<stdlib.h>
int main()
{
    //malloc/ calloc 으로 동적할당
    //malloc은 0으로 초기화 안하지만 calloc은 전부 0으로 초기화 해줌
    int *maloc = (int*)malloc(sizeof(int) * 2);
    int *caloc = (int*)calloc(2,sizeof(int));
    for(int i=0;i<2;i++){
        printf("malloc : %d  calloc : %d\n",maloc[i], caloc[i]);
    }

    
    *maloc = 3;
    *(maloc+1) = 8;

    printf("%d %d\n",*maloc, *(maloc+1));

    *(maloc+2) = 2;
    realloc(maloc, sizeof(int)*2);

    for(int i=0;i<4;i++){
        printf("%d\n",*(maloc+i));
    }
    
    //메모리 해제
    free(maloc);
    free(caloc);
    return 0;
}