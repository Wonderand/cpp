//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    // break使用时机

    //1、出现在Switch语句中
    cout << "请选择用户的难度" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    int select = 0; // 创建选择结果的变量

    cin >> select; // 等待用户输入

    switch (select) {
        case 1:
            cout << "您选择的是普通" << endl;
            break;
        case 2:
            cout << "您选择的是中等" << endl;
            break;
        case 3:
            cout << "您选择的是困难" << endl;
            break;
    }
    //2、出现在循环语句中
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }
    //3、出现在循环嵌套语句中
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 5) {
                break;
            }
            printf("\t*");
        }
        printf("\n");
    }

    return 0;
}