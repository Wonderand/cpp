//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;

int main() {
    system("chcp 65001");
    //1.定义指针
    int a = 10;
    //指针定义的语法：数据类型 * 指针变量名；
    int *p;
    //让指针定义变量a的地址
    p = &a;
    cout << "a的地址是：" << &a << endl;
    cout << "指针p为：" << p << endl;
    //2.使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加个 * 代表解引用，找到指针指向内存中的数据
    *p = 1000;
    cout << "a= " << a << endl;
    cout << "*p= " << *p << endl;


    system("pause");
    return 0;
}
