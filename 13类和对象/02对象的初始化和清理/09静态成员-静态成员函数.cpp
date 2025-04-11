//
// Created by 22906 on 2025/4/11.
//
#include "iostream"

using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person {

public:
    //静态成员函数
    static void func() {
        m_A = 100; //静态的成员函数是可以访问 静态的成员变量
//        m_B = 200; //静态的成员函数 不可以访问 非静态成员变量,无法区分到底是哪个对象的m_B属性F
        cout << "static void func" << endl;
    }

    static int m_A; //静态成员变量
    int m_B; //非静态成员变量
private:
    static void func2() {
        cout << "static void func2" << endl;
    }
};

int Person::m_A = 0;

void test01() {
    //1、通过对象访问
    Person p;
    p.func();

    //2、通过类名访问
    Person::func();
    cout << Person::m_A << endl;

//    Person::func2(); 类外访问不对私有的静态函数
}

int main() {

    test01();
    return 0;
}