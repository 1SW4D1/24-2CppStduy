#include<stdio.h>
int main()
{
    char str[50] = "Hello, World!";
    int len = -1;
    
    while(str[++len] != NULL);

    printf("���ڿ��� ���� : %d\n",len);
    printf("���ڿ� str : %s\n",str);
    printf("���ڿ��� �� : %d\n",str[len]);
    return 0;
}