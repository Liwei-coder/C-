/*************************************************************************
	> File Name: 146.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 09时57分41秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[55] = {0};
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'Z' || str[i] == 'z') putchar(str[i] - 25);
        else if (str[i] >= 'a' && str[i] <= 'y' || str[i] >= 'A' && str[i] <= 'Y') putchar(str[i] + 1);
        else putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
