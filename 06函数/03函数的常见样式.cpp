//
// Created by 22906 on 2025/3/14.
//
#include "iostream"

using namespace std;

//函数的常见样式
/*
 * 1、无参无返
 * 2、有参无返
 * 3、无参有返
 * 4、有参有返
 */
//1、无参无返
void test1() {
    cout << "this is test1." << endl;
}

//2、有参无返
void test2(int a) {
    cout << "this is test2 a=" << a << endl;
}

//3、无参有返
int test3() {
    cout << "this is test3" << endl;
    return 1000;
}

//4、有参有返
int test4(int a) {
    cout << "this is test4 a=" << a << endl;
    return a;
}

int main() {

    //无参无返调用
    test1();
    //有参无返调用
    test2(1);
    //无参有返调用
    int num1 = test3();
    cout << "num1=" << num1 << endl;
    //有参有返调用
    int num2 = test4(122);
    cout << "num2=" << num2 << endl;
    return 0;
}