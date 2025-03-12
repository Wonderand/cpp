//
// Created by 22906 on 2025/1/23.
//
#include "iostream"
using namespace std;

int main(){

    //三目运算符
    //创建三个变量a b c
    //将a和b做比较，将变量大的赋值给c
    int a = 10;
    int b = 20;
    int c = a > b ? a : b;
    cout << "c = " << c << endl;
    // 在c++中，三目运算符返回的值是变量，可以继续赋值
    (a > b ? a : b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
