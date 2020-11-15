/*************************************************************************
	> File Name: 150.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 09时48分24秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, m, num[205][205];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            i == n - 1 || printf(" ");
            printf("%d", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
