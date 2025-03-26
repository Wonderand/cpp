//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;

int main() {

    //指针和数组
    //利用指针访问数组中的元素
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << arr[0] << endl;

    int *p = arr; //arr就是数组的首地址

    cout << "利用指针来访问第一个元素:" << *p << endl;
    p++; //指针向后偏移四个字节
    cout << "利用指针来访问第二个元素：" << *p << endl;
    cout << p << " " << arr << endl;
    cout << "利用指针来遍历数组" << endl;
    p--; //归位
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "长度是：" << size << endl;
    for (int i = 0; i < size; ++i) {
        cout << *p << endl;
        p++;
    }

    return 0;
}