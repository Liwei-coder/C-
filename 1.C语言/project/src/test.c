/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月13日 星期五 14时12分58秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <test.h>
#include <math.h>

int func_cnt = 0;
Function func_arr[100];
struct FunctionInfo test_info;

int RUN_ALL_TESTS() {
    for (int i = 0; i < func_cnt; i++) {
        printf(GREEN("[====RUN====]:") RED("%s\n"), func_arr[i].str);
        test_info.total = 0, test_info.success = 0;
        func_arr[i].func();
        double rate = test_info.success * 1.0 / test_info.total;
        rate *= 100;
        printf(PURPLE("[  "));
        if (fabs(rate - 100.0) < 1e-6) {
            printf(BLUE_HL("%6.2lf%%"), rate);
        } else {
            printf(RED_HL("%6.2lf%%"), rate);
        }
        printf(PURPLE("  ]\n") BLUE_HL("total : %d success : %d\n"), 
            test_info.total, 
            test_info.success
        );
    }
    return 0;
}

void add_function(TestFuncT func, const char *str) {
    func_arr[func_cnt].func = func;
    func_arr[func_cnt].str = strdup(str);
    func_cnt++;
    return ;
}
