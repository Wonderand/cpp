//
// Created by 22906 on 2025/3/26.
//
#include "iostream"
using namespace std;

int main(){

    //1、const修饰的指针 常量指针
    int a = 10;
    int b = 20;
    const int *p = &a;
    //指针指向的值不可以改，指针的指向可以改
    //*p = 20; 错误
    p = &b; //正确

    //2、const修饰常量 指针常量
    //指针的指向不可以改，指针指向的值可以改
    int * const p2 = &a;
    *p2 = 100; //正确
    //p2 = &b; 错误,指针的指向不可以改


    //3、const修饰指针和常量
    const int * const p3 = &a;
    //指针的指向和指针指向的值 都不可以改
    //*p3 = 400; //错误
    //p3 = &b; //错误
    return 0;
}