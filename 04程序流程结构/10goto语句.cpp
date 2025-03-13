//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    // goto语句
    cout << "1、xxx" << endl;
    cout << "2、xxx"  << endl;
    goto FLAG;
    cout << "3、xxx"  << endl;
    FLAG:
    cout << "4、xxx"  << endl;

    return 0;
}