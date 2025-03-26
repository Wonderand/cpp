//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;

//实现两个数字进行交换
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01a=" << a << endl;
    cout << "swap01b=" << b << endl;
}

void swap2(int *p, int *p2) {
    cout << p << endl;
    int temp = *p;
    *p = *p2;
    *p2 = temp;
}

int main() {

    //指针和函数
    //1、值传递
    int a = 10;
    int b = 20;
    swap1(a, b);

    cout << "值传递a=" << a << endl;
    cout << "值传递b=" << b << endl;
    cout << &a << endl;
    //2、地址传递
    swap2(&a, &b);
    cout << "地址传递a=" << a << endl;
    cout << "地址传递b=" << b << endl;
    return 0;
}