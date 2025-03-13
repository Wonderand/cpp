//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    //数组
    /*
     * 1、数据类型 数组名[数组长度]；
     * 2、数据类型 数组名[数组长度] = {值1,值2,...};
     * 3、数据类型 数组名[] = {值1,值2...};
     */
    // 1、数据类型 数组名 [数组长度];
    int arr[5];
    //给数组中的元素赋值
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // 访问数据元素
    cout << arr[0] << endl;
//    for (const auto &item: arr){
//        cout << item << endl;
//    }
    // 2、数据类型 数组名[数组长度] = {值1,值2,...};
    int arr2[5] = {10, 20, 30, 40, 50};// 如果在初始化的时候没有全部填写完，会用0来填补剩余数据
    cout << arr2[3] << endl;

    // 3、数据类型 数组名[] = {值1,值2...};
    int arr3[] = {80, 90, 40, 20, 41, 50, 80, 90};
    cout << arr3[4] << endl;

    // 一维数组名称的用途
    // 1、可以同居整个数组在内存中的长度 sizeof(arr)
    // 2、可以获取数组在内存中的首地址 cout << arr endl;
    cout << "sizeof=" << sizeof(arr3[1]) << endl;
    cout << "arr=" << (int) arr3 << endl;
    cout << "leanth=" << sizeof(arr3) / sizeof(arr3[0]) << endl;
    cout << "arr3[0]的地址为=" << (int) &arr3[0] << endl;
    cout << "arr3[1]的地址为=" << (int) &arr3[1] << endl;

    return 0;
}