//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;

int main(){
    system("chcp 65001");
    // 指针所占用内存空间
    int a = 10;
    int * p = &a;

    // 在32位操作系统下，指针是占用4个字节空间大小，不管是什么数据类型
    // 在64位操作系统下，指针是占用8个字节空间大小，不管是什么数据类型
    cout << "sizeof int * = " << sizeof(int *) << endl;
    cout << "sizeof int * = " << sizeof(float *) << endl;
    cout << "sizeof int * = " << sizeof(double *) << endl;
    cout << "sizeof int * = " << sizeof(char *) << endl;

    system("pause");
    return 0;
}