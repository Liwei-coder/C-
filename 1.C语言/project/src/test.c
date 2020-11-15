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
#include <linklist.h>
#include <stdlib.h>

int func_cnt = 0;
Function func_head, *func_tail = &func_head;
struct FunctionInfo test_info;

int RUN_ALL_TESTS() {
    for (struct LinkNode *p = func_head.p.next; p; p = p->next) {
        Function *func = Head(p, Function, p);
        printf(GREEN("[====RUN====]:") RED("%s\n"), func->str);
        test_info.total = 0, test_info.success = 0;
        func->func();
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
    Function *temp = (Function *)calloc(1, sizeof(Function));
    temp->func = func;
    temp->str = strdup(str);
    func_tail->p.next = &(temp->p);
    func_tail = temp;
    return ;
}
