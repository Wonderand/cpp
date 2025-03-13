//
// Created by 22906 on 2025/3/12.
//
#include "iostream"
using namespace std;

int main(){
    system("chcp 65001");

    //利用循环嵌套实现星图
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("\t*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}