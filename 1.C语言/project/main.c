/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月13日 星期五 14时10分04秒
 ************************************************************************/
#include <stdio.h>
#include <test.h>

double add(double a, double b) {		//定义一个add的测试函数
    return a + b;
}
//TEST是一个测试用例组， 使用宏定义进行实现，testfunc+add是函数名，TEST在主函数之前运行
TEST(testfunc, add) {
    EXPECT_EQ(add(3, 3), 6);					//类似于函数调用的宏EXPEC_EQ
    EXPECT_NE(add(4, 3), 5);
    EXPECT_LT(add(5, 2), 9);
    EXPECT_LE(add(2, 5), 7);
}
TEST(functest1, add1) {
    EXPECT_GT(add(1, 5), 4);
    EXPECT_GE(add(4, 6), 9);
    EXPECT_EQ(add(3, 3), 8);
    EXPECT_EQ(add(2, 5), 7);
}

int main(int argc, char *argv[]) {
    //testing::InitGoogleTest(&argc,argv);
    //ALL_RUN_TESTS()是一个类似于函数的宏，保存测试组的一些信息，并进行输出
    return RUN_ALL_TESTS();
}
