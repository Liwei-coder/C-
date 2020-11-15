/*************************************************************************
	> File Name: 4.test.cpp
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Fri 16 Oct 2020 03:49:34 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a = 7, b = 3, c;
    a += 7;
    int *p = &a;
    (*p)--;
    printf("a = %d, b = %d\n", a, b);
    
    /*int temp = a;
    a = b;
    b = temp;*/
    a ^= b;
    b ^= a;
    a ^= b;
    printf("swap:a = %d, b = %d\n", a, b);
    return 0;
}
