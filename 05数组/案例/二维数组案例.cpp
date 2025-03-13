//
// Created by 22906 on 2025/3/13.
//
#include "iostream"
using namespace std;

int main(){

    // 二维数组名称用途
    // 1、可以查看内存空间大小
    int arr[2][3] = {
            {1,4,5},
            {2,5,7}
    };
    cout << "二维数组的占用内存空间为：" << sizeof(arr) << endl;
    cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用的内存空间为：" << sizeof(arr[0][0]) << endl;
    cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0])  << endl;
    cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0])<< endl;

    // 2、可以查看二维数组的首地址
    cout<< "二维数组的首地址为：" << (int)&arr << endl;
    cout<< "二维数组的第一行首地址为：" << (int)&arr[0] << endl;
    cout<< "二维数组的第二行首地址为：" << (int)&arr[1] << endl;
    return 0;
}