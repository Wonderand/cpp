//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    int arr[] = {2223, 453, 662, 641, 354, 771, 31, 74};
    //冒泡排序
    /*
     * 1、比较相邻的元素。如果第一个元素比第二个元素大，就交换他们两个。
     * 2、对每一对相邻的元素做同样的工作，执行完毕后，找到第一个最大值。
     * 3、重复以上步骤，每次比较次数-1，直到不需要对比
     */
    int size = sizeof(arr) / sizeof(arr[0]);

    // 开始冒泡排序
    // 总共排序轮数为 元素个数-1
    for (int i = 0; i < size - 1; ++i) {
        //内层循环对比 次数 = 元素个数-当前轮数-1
        for (int j = 0; j < size - i - 1; ++j) {
//            cout << "测试=" << j << endl;
            // 如果第一个数比第二个数字大，交换两个数字
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }

    for (const auto &item: arr) {
        cout << item << endl;
    }
    return 0;
}
