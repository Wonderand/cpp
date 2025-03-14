//
// Created by 22906 on 2025/3/14.
//
#include "iostream"

using namespace std;
// 函数的定义
// 语法：
// 返回值类型 函数名（参数列表）{ 函数体语句 return 表达式 }

// 加法函数，实现两个整形相加，并且将相加的结果返回
int add(int num1, int num2) {
    int sum = num2 + num1;
    return sum;
}

int main() {
    // main函数中调用add函数
    int a = 10;
    int b = 30;
    int sum = add(a, b);
    cout << "sum=" << sum << endl;

    return 0;
}

