//
// Created by 22906 on 2025/4/14.
//
#include "iostream"

using namespace std;

class MyInteger {
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:

    MyInteger() {
        m_Num = 2;
    }

    MyInteger &operator--() {
        --m_Num;
        return *this;
    }

    MyInteger operator--(int) {

        MyInteger temp = *this;
        m_Num--;

        return temp;
    }

private:
    int m_Num;

};

//运算符<<重载
ostream &operator<<(ostream &cout, MyInteger myint) {
    cout << myint.m_Num;
    return cout;
}

void test01() {
    MyInteger myint;

    cout << --myint << endl;
}

void test02() {
    MyInteger myint;

    cout << myint-- << endl;
    cout << myint << endl;
}

int main() {
    system("chcp 65001");

//    test01();
    test02();

    system("pause");
    return 0;
}