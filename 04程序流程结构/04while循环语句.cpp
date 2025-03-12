//
// Created by 22906 on 2025/2/13.
//
#include "iostream"
using namespace std;

int main()
{

    // while循环
    // 在屏幕中打印0~9这10个数字
    int num = 0;
//    cout << num << endl;
//
//    num ++;
//    cout << num << endl;

    // while 中填入循环条件
    // 注意事项：在写入循环一定要避免死循环的出现
    while(num <= 9)
    {
        cout << num << endl;
        num ++;
    }
    return 0;
}