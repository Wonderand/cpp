//
// Created by 22906 on 2025/1/23.
//
#include "iostream"
using namespace std;

int main(){

    // 逻辑运算符 非 ！
    int a = 10;
    // 在c++中 除了0都是真
    cout << !a << endl;

    cout << !!a << endl;

    // 逻辑运算符 与 && 两个条件都为真，结果为真
    // 同真为真，其余为假
    int b = 10;
    cout << (a && b) << endl;

    a = 0;
    cout << (a && b) << endl;

    // 逻辑运算符 或 || 两个条件有一个为真，则结果为真
    // 同假为假，其余为真
    a = 10;
    b = 10;
    cout << (a || b) << endl;
    a  = 0;
    cout << (a || b) << endl;
    return 0;
}
