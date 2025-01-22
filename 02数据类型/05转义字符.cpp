//
// Created by 22906 on 2025/1/22.
//
#include "iostream"
using namespace std;

int main()
{
    system("chcp 65001");
    // 转义字符

    // 换行符号\n

    cout << "hello world \n";
    // 反斜杠 \\

    cout << "\\\n";
    // 水平制表符 \t 可以整齐输入数据
    cout << "aaaa\t hello world" << endl;
    cout << "aa\t hello world" << endl;
    cout << "aaaaaa\t hello world" << endl;

    system("pause");
    return 0;
}