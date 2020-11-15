/*************************************************************************
	> File Name: 3.printf.cpp
	> Author:Liwei 
	> Mail:2295644775@qq.com 
	> Created Time: Thu 15 Oct 2020 06:13:45 PM CST
 ************************************************************************/
#include <stdio.h>
#define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    char str[1000] = {0}, buffer[1000], *p = str, *q = buffer;
    sprintf(str, "%d.%d.%d.%d", 192, 168, 1, 2);
    printf("%s\n", str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(p, q);
    }
    if (n & 2) {
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    if (n & 4) {
        sprintf(q, "{%s}", p);
        swap(p, q);
    }
    printf("%s\n", p);

    FILE *fout = fopen("output", "w");
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stdree = %s\n", p);
    return 0;
}

