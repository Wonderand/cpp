//
// Created by 22906 on 2025/3/31.
//
#include "iostream"

using namespace std;
// 全局变量
int g_a = 10;
int g_b = 10;

// const修饰的全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
    system("chcp 65001");
    // 全局区

    // 全局变量、静态变量、常量

    // 创建一个普通的局部变量
    int a = 12;
    int b = 8;
//    int *c = &a;
//    c--;
    cout << "局部变量a的地址为：" << (long long) &a << endl;
    cout << "局部变量b的地址为：" << (long long) &b << endl;

    cout << "全局变量g_a的地址为：" << (long long) &g_a << endl;
    cout << "全局变量g_b的地址为：" << (long long) &g_b << endl;

    // 静态变量 在普通变量的前面加static，属于静态变量
    static int s_a = 10;
    cout << "静态变量s_a的地址为：" << (long long) &s_a << endl;

    // 常量
    // 字符串常量
    cout << "字符串常量的地址为：" << (long long) &"hello world" << endl;

    // const修饰常量
    // const修饰的全局变量
    cout << "全局常量c_g_a的地址为：" << (long long) &c_g_a << endl;
    cout << "全局常量c_g_b的地址为：" << (long long) &c_g_b << endl;
    // const修饰的局部变量
    const int c_l_a = 10; // c-const g-global l-local
    const int c_l_b = 10;

    cout << "局部常量c_l_a的地址为：" << (long long) &c_l_a << endl;
    cout << "局部常量c_l_b的地址为：" << (long long) &c_l_b << endl;
    system("pause");
    return 0;
}