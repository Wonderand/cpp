//
// Created by 22906 on 2025/3/13.
//
#include "iostream"

using namespace std;

int main() {

    for (int i = 1; i < 10; ++i) {

        for (int j = 0; j < i; ++j) {

            cout << i * (j+1) << "\t";
        }
        cout << "" << endl;
    }
    return 0;
}