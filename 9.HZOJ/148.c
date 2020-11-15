/*************************************************************************
	> File Name: 148.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 10时43分30秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[55] = {0};
    scanf("%s", str);
    for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}
