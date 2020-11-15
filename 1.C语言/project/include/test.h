/*************************************************************************
	> File Name: test.h
	> Author: 
	> Mail: 
	> Created Time: 2020年11月13日 星期五 14时12分32秒
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define COLOR_HL(a, b) "\033[1;" #b "m" a "\033[0m"

#define RED(a) COLOR(a, 31)
#define GREEN(a) COLOR(a, 32)
#define YELLOW(a) COLOR(a, 33)
#define BLUE(a) COLOR(a, 34)
#define PURPLE(a) COLOR(a, 35)

#define RED_HL(a) COLOR_HL(a, 31)
#define GREEN_HL(a) COLOR_HL(a, 32)
#define YELLOW_HL(a) COLOR_HL(a, 33)
#define BLUE_HL(a) COLOR_HL(a, 34)
#define PURPLE_HL(a) COLOR_HL(a, 35)

#define TEST(a, b)\
void a##_##b();\
__attribute__((constructor))\
void add##_##a##_##b() {\
    add_function(a##_##b, #a "." #b);\
}\
void a##_##b()

#define Type(a) _Generic((a),\
    int : "%d",\
    double : "%.2lf",\
    long long : "%lld",\
    const char * : "%s",\
    char * : "%s"\
)

#define P(a, color) {\
    char frm[1000];\
    sprintf(frm, color("%s"), Type(a));\
    printf(frm, a);\
}

#define EXPECT(a, b, comp){\
    test_info.total += 1;\
    __typeof(a) _a = (a);\
    __typeof(b) _b = (b);\
    if (_a comp _b) test_info.success += 1;\
    else {\
        printf("\n");\
        printf(YELLOW_HL("\t%s:%d\n"), __FILE__, __LINE__);\
        printf(YELLOW_HL("\t    expect: " #a #comp #b "\n\t    actual: "));\
        P(a, YELLOW_HL);\
        printf(YELLOW_HL(" VS "));\
        P(b, YELLOW_HL);\
        printf("\n\n");\
    }\
    printf(GREEN("[-----------]"));\
    printf("%s %s %s %s\n", #a, #comp, #b, _a comp _b ? GREEN_HL("True") : RED_HL("False"));\
}


#define EXPECT_EQ(a, b) EXPECT(a, b, ==)
#define EXPECT_NE(a, b) EXPECT(a, b, !=)
#define EXPECT_LT(a, b) EXPECT(a, b, <)
#define EXPECT_LE(a, b) EXPECT(a, b, <=)
#define EXPECT_GT(a, b) EXPECT(a, b, >)
#define EXPECT_GE(a, b) EXPECT(a, b, >=)

typedef void (*TestFuncT)();

typedef struct Function {
    TestFuncT func;
    const char *str;
    struct LinkNode p;
} Function;

struct FunctionInfo {
    int total, success;
};

extern struct FunctionInfo test_info;
int RUN_ALL_TESTS();
void add_function(TestFuncT, const char *);
#endif
