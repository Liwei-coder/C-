/*************************************************************************
	> File Name: 20.LOG.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 15时48分12秒
 ************************************************************************/
#include <stdio.h>
#ifdef DEBUG 
#define log(frm, args...) {\
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__);\
    printf(frm, ##args);\
    printf("\n");\
}
#else 
#define log(frm, args...)
#endif

#define contact(a, b) a##b

int main() {
    int a = 123;
    int b = 234;
    int abcdef = 0, abc, def;
    log("%d", b);
    log("hello world");
    contact(abc, def) = 112233;
    log("%d", abcdef);
    return 0;
}
