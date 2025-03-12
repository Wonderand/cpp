//
// Created by 22906 on 2025/3/12.
//
#include "iostream"
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main()
{
    system("chcp 65001");
    // 水仙花数
    // 水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本事。例如：1^3+5^3+3^3=153
    // 利用do...while循环语句求出所有3位数中的水仙花数
    int num = 100;
    do {
        // 个位
        int a = num % 10;
        // 十位
        int b = num / 10 % 10;
        // 百位
        int c = num / 100;
//        cout << "a=" <<a << ";b=" << b << ";c=" << c << endl;
        int temp = power(a ,3) + power(b ,3)+power(c ,3);
//        cout << temp << endl;
        if (temp == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 999);
    system("pause");
    return 0;
}