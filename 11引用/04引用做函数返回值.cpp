//
// Created by 22906 on 2025/4/3.
//
#include "iostream"

using namespace std;

//引用做函数返回值
//1、不要返回局部变量的引用
int &test01() {

    int a = 10; //局部变量存放在四区中的 栈区
    int b = 29;
    return b;
}

//2、函数调用可以作为左值
int &test02() {
    static int a = 10; //静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}

int main() {
    system("chcp 65001");
//    int &ref = test01();
//
//    cout << ref << endl;

    int &ref2 = test02();
    cout << ref2 << endl;

    test02() = 1000; //如果函数的返回值是引用，这个函数调用可以作为左值
    cout << ref2 << endl;
    cout << ref2 << endl;

    system("pause");
    return 0;
}