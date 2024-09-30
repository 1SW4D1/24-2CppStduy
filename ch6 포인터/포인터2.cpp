#include <stdio.h>
int main()
{
    int arr[3] = {5, 2, 3};
    // 배열은 포인터 변수다?
    printf("arr의 주소값 %p\n", arr);
    printf("arr[0]의 주소값 %p\n", &arr[0]);
    printf("arr[1]의 주소값 %p\n", &arr[1]);
    printf("arr[2]의 주소값 %p\n", &arr[2]);
    printf("arr 역참조 %d\n\n", *arr);

    // 배열의 이름은 포인터 상수
    int num1 = 3, num2 = 5;
    int *ptr = NULL;
    ptr = &num1;
    ptr = &num2;
    // arr[1]=&num1; => 배열에는 주소값 저장이 안됨 => 배열은 포인터 변수라기보단 포인터 상수에 가깝다.

    // arr+1과 &arr+1의 값은 같지 않다.
    printf("arr+1 : %p != &arr+1 : %p\n\n", arr + 1, &arr + 1);
    // arr+1은 4바이트, &arr+1은 12바이트 더 커졌다.

    // arr+1의 주소값과 a[1]의 주소값은 같다.
    printf("arr : %p == &arr[0] : %p\n", arr, &arr[0]);
    printf("arr+1 : %p == &arr[1] : %p\n", arr + 1, &arr[1]);
    printf("arr+2 : %p == &arr[2] : %p\n", arr + 2, &arr[2]);

    return 0;
}