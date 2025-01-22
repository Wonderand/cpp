//
// Created by 22906 on 2025/1/22.
//
#include "iostream"
using namespace std;
int main()
{
    system("chcp 65001");
    // 1、创建bool数据类型
    bool flag = true; // true代表真
    cout << flag << endl;
    flag = false; // false代表假
    cout << flag << endl;

    // 本质上1代表真的值，而0代表假的值
    // 2、查看bool类型所占内存空间
    cout << "bool类型所占用内存空间：" << sizeof(bool) << endl;
    system("pause");
    return 0;
}