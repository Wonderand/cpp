//
// Created by 22906 on 2025/4/3.
//
#include "iostream"

using namespace std;

//交互函数
//1、值传递
void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Swap01a=" << a << endl;
    cout << "Swap01b=" << b << endl;
}

//2、地址传递
void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3、引用传递
void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 10;
    int b = 20;
//    mySwap01(a, b); //值传递，形参不会修改实参
//    mySwap02(&a, &b); //地址传递，形参会修改实参

    mySwap03(a, b); //引用传递，形参会修饰实参
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}