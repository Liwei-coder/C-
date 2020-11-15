/*************************************************************************
	> File Name: 15.binary_search.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 13时55分53秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

double f(double x) {
    return x * x;
}

double binary_search(double (*arr)(double), double x) {
    double head = 0, tail = x, mid;
    if (x < 1.0) tail = 1.0;
    #define EPSL 1e-7
    while (tail - head > EPSL) {
        mid = (head + tail) / 2.0;
        if (arr(mid) < x) head = mid; 
        else tail = mid;
    }
    #undef EPSL
    return head;
}

int main() {
    double x;
    while (~scanf("%lf", &x)) {
        double ans = binary_search(f, x);
        printf("sqrt(%g) = %g\n", x, sqrt(x));
        printf("my_sqrt(%g) = %g\n", x, ans);
    }
    return 0;
}
