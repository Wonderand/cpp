//
// Created by 22906 on 2025/1/10.
//
#include "iostream"
using namespace std;

int main()
{
    /**
     * c/c++中字符变量只占用1个字节
     * 字符变量并不是把字符本身放到内存存储，而是将对应的ASCII编码放到存储单元
     */
    // 1.字符型变量创建方式
    char ch = 'a';
    cout << ch << endl;
    // 2.字符变量所占内存大小
    cout << "字符变量所占用的内存：" << sizeof(ch) << endl;
    // 3.字符变量常见错误
    char ch2 = 'b';
//    char ch2 = "b"; 创建字符型要用单引号


    // 4.字符变量对应的ASCII编码

    return 0;
}
