//
// Created by 22906 on 2025/3/14.
//
#include "iostream"

using namespace std;
#include "./include/swap.h"

//函数的分文件编写
//实现两个数字进行交换的函数
//函数的声明
//void swap(int a, int b);
//
////函数的定义
//void swap(int a, int b) {
//
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//
//}
//1、创.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义
// 此处在clion中运行出错，可以使用命令g++ -Iinclude -o my_program 05函数的分文件编写.cpp swap.cpp在cmd中编译
int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
    system("pause");
    return 0;
}