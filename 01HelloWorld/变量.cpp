//
// Created by 22906 on 2025/1/10.
//
#include "iostream"
// 解决system("pause");乱码
#include <windows.h>

using namespace std;
// 常量的定义方式
// 1. #define 宏常量
// 2. const 修饰的变量称为常量

// 1.#define宏常量定义
#define Day 7
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // CHCP是一个计算机指令，能够显示或设置活动代码页编号, 65001 UTF-8代码页
//    system("chcp 65001");

    // 变量
    int a = 10;

    cout << a << "你好" << endl;

    cout << "一周共有：" << Day << "天" << endl;

    // 2.const 修饰的变量
    const int month = 12;
    cout << "一年总共有：" << month << "个月份" << endl;
    system("pause");
    return 0;
}