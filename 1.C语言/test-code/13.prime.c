/*************************************************************************
	> File Name: 13.prime.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 13时37分08秒
 ************************************************************************/
#include <stdio.h>
#define max_n 100

int prime[max_n + 5];
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}
int main() {
    init();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
