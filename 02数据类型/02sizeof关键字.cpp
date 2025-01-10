//
// Created by 22906 on 2025/1/10.
//
// sizeof关键字可以统计数据类型所占内存大小
#include "iostream"
using namespace std;

int main()
{
    system("chcp 65001");

    short num1 = 10;
    cout << "short占用的内存空间为：" << sizeof(num1) << endl;
    int num2 = 10;
    cout << "int占用的内存空间为：" << sizeof(num2) << endl;
    long num3 = 10;
    cout << "long占用的内存空间为：" << sizeof(num3) << endl;
    long long num4 = 10;
    cout << "long long占用的内存空间为：" << sizeof(num4) << endl;

    //整形大小比较short < int <= long < =long long
//    system("pause");
    return 0;
}