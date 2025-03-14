//
// Created by 22906 on 2025/3/14.
//
#include "iostream"

using namespace std;

int main() {

    //考试成绩统计

    //1、创建二维数组

    int scores[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {70, 70, 80}
    };

    string names[] = {"张三","李四","王五"};
    //2、统计每个人的总分和
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum+=scores[i][j];
//            cout << scores[i][j] << " ";
        }
        cout << names[i] << "sum=" << sum << endl;
    }

    return 0;
}