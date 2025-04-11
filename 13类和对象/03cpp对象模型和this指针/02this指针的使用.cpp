//
// Created by 22906 on 2025/4/11.
//
#include "iostream"

using namespace std;

class Person {
public:
    Person(int age) {
        //this指针指向的是 被调用的成员函数 所属的对象
        this->m_Age = age;
    }

    int m_Age;

    Person &PersonAddAge(Person &p) {
        this->m_Age += p.m_Age;
        cout << "年龄追加" << endl;
        return *this;
    }
};

//1、解决名称冲突
void test01() {
    Person p1(18);
    cout << "p1的年龄是：" << p1.m_Age << endl;
}

//2、返回对象本身用*this
void test02() {
    Person p1(10);

    Person p2(10);

    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main() {

    test01();
    test02();
    return 0;
}