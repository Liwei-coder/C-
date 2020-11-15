/*************************************************************************
	> File Name: 9.gcd.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 10时20分24秒
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b): a);
}

int main() {
    int a, b;
    while(scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d", a, b, gcd(a, b));
    }

    return 0;
}
