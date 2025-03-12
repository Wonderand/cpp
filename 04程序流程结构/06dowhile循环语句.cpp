//
// Created by 22906 on 2025/3/12.
//
#include "iostream"
using namespace std;


int main(){

    system("chcp 65001");
    //do...while语句
    //在屏幕中输出0-9这10个数字
    int num = 0;

    do {
        cout << num << endl;
        num ++;
    } while (num < 10);

    // do...while和while的区别就是do...while会先执行一次循环语句。
    system("pause");
    return 0;
}