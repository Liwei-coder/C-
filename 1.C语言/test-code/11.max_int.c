/*************************************************************************
	> File Name: 11.max_int.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 10时54分27秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

int max_int(int n, ...) {
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, n);
    while(n--) {
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 1, 4, 6));
    printf("%d\n", max_int(6, 9, 4, 6, 3, 6, 1));
    return 0;
}
