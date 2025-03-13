//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    // 在continue语句
    for (int i = 0; i < 100; ++i) {
        // 如果是奇数输出，如果是偶数不输出
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
