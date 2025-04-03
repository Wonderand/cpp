//
// Created by 22906 on 2025/4/3.
//
#include "iostream"

using namespace std;

int main() {

    int a = 10;

    //1、引用必须初始化
    //int &b; //错误，必须要初始化
    int &b = a;
    //2、引用在初始化后不可以改变
    int c = 20;

    b = c;//赋值操作，而不是更改引用

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    return 0;
}