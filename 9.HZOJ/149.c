/*************************************************************************
	> File Name: 149.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 10时20分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[55] = {0};
    scanf("%[^\n]", str);
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            printf("%d\n", n - 1 - i);
            break ;
        }
    }
    return 0;
}
