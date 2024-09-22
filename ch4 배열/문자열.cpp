#include<stdio.h>
int main()
{
    char str[50] = "Hello, World!";
    int len = -1;
    
    while(str[++len] != NULL);

    printf("문자열의 길이 : %d\n",len);
    printf("문자열 str : %s\n",str);
    printf("문자열의 끝 : %d\n",str[len]);
    return 0;
}