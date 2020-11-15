/*************************************************************************
	> File Name: 7.cpp
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Sat 17 Oct 2020 07:54:19 PM CST
 ************************************************************************/
#include <stdio.h>

int rev_num(int n, int base) {
    if(n < 0) return 0;
    int x = n, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", rev_num(n, 10) ? "YES" : "NO");
    
    return 0;
}

