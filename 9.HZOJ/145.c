/*************************************************************************
	> File Name: 145.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月11日 星期三 11时00分22秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char name[25][105];
    int n, max_index = 0, max_len = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }
    for (int i = 0; i < n; i++) {
        if (strlen(name[i]) > max_len) {
            max_index = i;
            max_len = strlen(name[i]);
        }
    }
    printf("%s\n", name[max_index]);

    return 0;
}
