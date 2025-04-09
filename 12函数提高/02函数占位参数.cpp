//
// Created by 22906 on 2025/4/9.
//
#include "iostream"

using namespace std;

//占位参数
//返回值类型 函数名 （数据类型）{}

//目前阶段的占位参数还用不到，后续会有用到
//占位参数 还可以有默认参数
void func(int a, int = 10) {
    cout << "this is function" << endl;
}

int main() {
    system("chcp 65001");

//    func(10, 1);
    //占位参数有默认值时可以不传参
    func(10);
    system("pause");
    return 0;
}