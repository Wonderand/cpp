//
// Created by 22906 on 2025/3/12.
//
#include "iostream"

using namespace std;

int main() {

    system("chcp 65001");
    // 输出一百个数
    for (int i = 1; i <= 140; ++i) {
        //找出特殊的数字，7的倍数、个位数为7、十位数为7。打印敲桌子
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "敲桌子:" << i << endl;
        }
    }
    system("pause");
    return 0;
}