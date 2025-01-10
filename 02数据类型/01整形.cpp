//
// Created by 22906 on 2025/1/10.
//
#include "iostream"
using namespace std;

int main()
{
    system("chcp 65001");

    //整形
    // 1.短整型 (-32768~32767)
    short num1 = 10;
    // 2.整形 (-)
    int num2 = 10;
    // 3.长整形 4byte
    long num3 = 10;
    // 4.长长整形 8byte
    long long  num4 = 10;

    cout << "num1=" << num1 << "\nnum2=" << num2 << "\nnum3=" << num3 << "\nnum4=" << num4 << endl;
    system("pause");
    return 0;
}