//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    // 1、在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
//    int arr[5] = {300, 350, 200, 400, 250};
//    int max = 0;
//    for (const auto &item: arr) {
//        if (max < item) {
//            max = item;
//        }
//    }
//    cout << max << endl;

    // 2、数组元素倒置，不修改原来数据
    int arr1[] = {1, 3, 2, 5, 4};

    int size = sizeof(arr1) / sizeof(arr1[0]);
//    cout << size << endl;
    int temp[size];
    int index = 0; // 起始下标
    for (int i = size - 1; i >= 0; i --) {
        temp[index] = arr1[i];
//        cout << arr1[i] << "index=" << i << endl;
        index++;
    }
    for (const auto &item: temp) {
        cout << item << endl;
    }

    // 数组元素倒置，修改原来数据
    int start = 0; //起始位置
    int end = sizeof(arr1) / sizeof(arr1[0]) - 1; //结束位置

    while (start < end){
        // 实现元素互换
        int temp1 = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp1;

        // 下标跟新
        start ++;
        end --;
    }
    for (const auto &item: arr1){
        cout << item << endl;
    }

    return 0;
}