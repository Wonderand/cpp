//
// Created by 22906 on 2025/3/26.
//
#include "iostream"
using namespace std;

int main(){

    //1、空指针用于给指针变量进行初始化
    int * p = nullptr;

    //2、空指针是不可以进行访问的
    //0~255之间的内存编号是系统占用的，因此不允许用户访问
    *p = 100;
    cout << p << endl;
    system("pause");
    return 0;
}