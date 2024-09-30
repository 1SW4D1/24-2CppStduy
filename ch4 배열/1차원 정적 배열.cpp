#include<stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr2[] = {1, 5};
    int arr3[3] = {0,};

    printf("arr의 byte 크기 : %d\n",sizeof(arr));
    printf("arr2의 byte 크기 : %d\n",sizeof(arr2));
    printf("arr3의 byte 크기 : %d\n\n",sizeof(arr3));

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(arr2)/sizeof(int);i++){
        printf("arr2[%d] : %d\n",i,arr2[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(arr3)/sizeof(int);i++){
        printf("arr3[%d] : %d\n",i,arr3[i]);
    }
    return 0;
}