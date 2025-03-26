//
// Created by 22906 on 2025/3/14.
//
#include "swap.h"

void swap(int a, int b) {  // 传引用，正确交换
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
