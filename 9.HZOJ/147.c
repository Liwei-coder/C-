/*************************************************************************
	> File Name: 147.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 10时48分17秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[10005] = {0};
    scanf("%s", str);
    printf("%s\n", (str[strlen(str) - 1] - '0') % 2 == 0 ? "YES" : "NO"); 
    return 0;
}
