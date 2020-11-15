/*************************************************************************
	> File Name: 17.arry.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 14时31分32秒
 ************************************************************************/
#include <stdio.h>
#define max_n 100

void func(int (*num)[100][32]) {
    printf("num = %p, num + 1 = %p\n", num, num + 1);
    return ;
}

int main() {
    int arr[100][100][32];
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("&arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p, arr + 2 = %p\n", arr + 1, arr + 2);
    char *p = (char *)arr;
    printf("p + 1 = %p, p + 2 = %p\n", p + 1, p + 2);
    func(arr);
    printf("arr = %p, arr + 2 = %p\n", arr, arr + 1);
    int **q;
    printf("q = %p, q + 1 = %p\n", q, q + 1);
    return 0;
}
