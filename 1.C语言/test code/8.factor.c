/*************************************************************************
	> File Name: 8.factor.cpp
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Sat 17 Oct 2020 08:59:12 PM CST
 ************************************************************************/
#include <stdio.h>

int fac(int n) {
    if (n == 1) return 1;
    return n * fac(n - 1);
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("fac(%d) = %d\n", n, fac(n));
    }

    return 0;
}
