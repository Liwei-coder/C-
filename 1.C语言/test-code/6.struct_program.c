/*************************************************************************
	> File Name: 6.struct_program.cpp
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Sat 17 Oct 2020 06:28:00 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, n , cnt = 0;
    srand(time(0));
    scanf("%d", &n);
    /*for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        if (val % 2) {
            cnt += 1;
        }
        if (i) printf(" ");
        printf("%d", val);
    }*/
    for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        cnt += (val & 1);
        i && printf(" ");
        printf("%d", val);
    }
    printf("\n");
    printf("odd num : %d\n", cnt);

    //a = 0, b = 0;
    /* if ((a++) && (b++)) {
        printf("true!\n");
    } else {
        printf("false\n");
    }*/
    printf("a = %d b = %d\n", a, b);
    
    if ((a++) || (b++)) {
        printf("true!\n");
    } else {
        printf("false\n");
    }
    printf("a = %d b = %d\n", a, b);

    return 0;
}
