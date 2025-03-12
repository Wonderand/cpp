//
// Created by 22906 on 2025/1/23.
//
#include "iostream"
using namespace std;

int main(){

    cout << "请给电影打分" << endl;
    int score = 0;
    cin >> score;
    cout << "您打的分数为：" << score << endl;
    switch (score)
    {
        case 10:
            cout << "您认为是经典电影" << endl;
            break;
        case 9:
            cout << "您认为是经典电影" << endl;
            break;
        case 8:
            cout << "您认为电影非常好" << endl;
            break;
        case 7:
            cout << "您认为电影电影非常好" << endl;
            break;
        case 6:
            cout << "您认为电影一般" << endl;
            break;
        default:
            cout << "您认为电影是烂片" << endl;
            break;
    }
    return 0;
}
