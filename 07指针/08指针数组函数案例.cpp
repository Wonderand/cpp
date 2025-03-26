//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;

//冒泡排序
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            // 如果j > j+1的值 交换数字
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//打印数组
void printArray(int *arr,int len){
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}
int main() {
    system("chcp 65001");
    //1、先创建数组
    int arr[10] = {112, 53, 64, 74, 58, 56, 5, 23, 4, 43};
    int len = sizeof(arr) / sizeof(arr[0]);
    //2、创建函数，实现冒泡排序
    bubbleSort(arr, len);

    //3、打印排序后的数组
    printArray(arr,len);
    system("pause");
    return 0;
}