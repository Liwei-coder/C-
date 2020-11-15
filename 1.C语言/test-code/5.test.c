/*************************************************************************
	> File Name: 5.test.c
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Sat 17 Oct 2020 02:45:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (!n) {
        printf("FOOLISH\n");
    } else if (n < 60) {
        printf("FAIL\n");
    } else if (n < 75) {
        printf("MEDIUM\n");
    } else if(n <= 100) {
        printf("GOOD\n");
    }

    return 0;
}
