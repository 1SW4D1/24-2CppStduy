#include <stdio.h>
int main()
{
    int arr[3] = {5, 2, 3};
    // �迭�� ������ ������?
    printf("arr�� �ּҰ� %p\n", arr);
    printf("arr[0]�� �ּҰ� %p\n", &arr[0]);
    printf("arr[1]�� �ּҰ� %p\n", &arr[1]);
    printf("arr[2]�� �ּҰ� %p\n", &arr[2]);
    printf("arr ������ %d\n\n", *arr);

    // �迭�� �̸��� ������ ���
    int num1 = 3, num2 = 5;
    int *ptr = NULL;
    ptr = &num1;
    ptr = &num2;
    // arr[1]=&num1; => �迭���� �ּҰ� ������ �ȵ� => �迭�� ������ ������⺸�� ������ ����� ������.

    // arr+1�� &arr+1�� ���� ���� �ʴ�.
    printf("arr+1 : %p != &arr+1 : %p\n\n", arr + 1, &arr + 1);
    // arr+1�� 4����Ʈ, &arr+1�� 12����Ʈ �� Ŀ����.

    // arr+1�� �ּҰ��� a[1]�� �ּҰ��� ����.
    printf("arr : %p == &arr[0] : %p\n", arr, &arr[0]);
    printf("arr+1 : %p == &arr[1] : %p\n", arr + 1, &arr[1]);
    printf("arr+2 : %p == &arr[2] : %p\n", arr + 2, &arr[2]);

    return 0;
}