//
// Created by 22906 on 2025/4/3.
//
#include "iostream"

using namespace std;

/*
 * 作用：给变量起别名
 */
int main() {

    //引用的基本语法
    //数据类型 &别名 = 原名

    int a = 10;
    //创建引用
    int &b = a;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    b = 100;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}