//
// Created by 22906 on 2025/1/22.
//
#include "iostream"
using namespace std;

int main(){

    // 取模的本质 就是求余数
    int a1 = 10;
    int b1 = 3;

    cout << a1 % b1 << endl;

    int a2 = 10;
    int b2 = 20;

    cout << a2 % b2 << endl;

    int a3 = 10;
    int b3 = 0;
    //两个数相除，除数不能为0，所以做不了模运算
    cout << a3 % b3 << endl;

    // 两个小数不能进行模运算
    double d1 = 3.14;
    double d2 = 1.1;
//    cout << d1 % d2 << endl;
    // 只有整形变量可以进行取模运算
    return 0;
}

