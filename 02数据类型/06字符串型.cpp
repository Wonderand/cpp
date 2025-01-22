//
// Created by 22906 on 2025/1/22.
//
#include "iostream"
using namespace std;

int main()
{
    //1.C风格的字符串
    // 注意事项 char字符名后要加[]
    // =后面要用双引号包含起来字符串
    char str[] = "hello world";
    cout << str << endl;
    //2.C++风格的字符串
    string str1 = "hello world";
    cout << str1 << endl;
    system("pause");
    return 0;
}