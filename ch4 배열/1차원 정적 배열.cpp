#include<stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr2[] = {1, 5};
    int arr3[3] = {0,};

    printf("arr�� byte ũ�� : %d\n",sizeof(arr));
    printf("arr2�� byte ũ�� : %d\n",sizeof(arr2));
    printf("arr3�� byte ũ�� : %d\n\n",sizeof(arr3));

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