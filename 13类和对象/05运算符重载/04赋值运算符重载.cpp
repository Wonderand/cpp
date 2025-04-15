//
// Created by 22906 on 2025/4/15.
//
#include "iostream"

using namespace std;

//赋值运算符重载
class Person {

public:

    Person(int age) {
        m_Age = new int(age);
    }

    ~Person() {
        if (m_Age != nullptr) {
            delete m_Age;
            m_Age = nullptr;
        }

    }

    //重载赋值运算符
    Person &operator=(Person &p) {
        //编译器提供浅拷贝
//        m_Age = p.m_Age;

        //应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
        if (m_Age != nullptr) {
            delete m_Age;
            m_Age = nullptr;
        }

        //深拷贝
        m_Age = new int(*p.m_Age);

        //返回对象本身
        return *this;
    }

    int *m_Age;
};

void test01() {
    Person p1(18);

    Person p2(20);

    Person p3(30);
    p3 = p2 = p1; //赋值运算操作


    cout << "p1的年龄为：" << *p1.m_Age << endl;
    cout << "p2的年龄为：" << *p2.m_Age << endl;
    cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main() {

    system("chcp 65001");

    test01();

//    int a = 10;
//    int b = 20;
//    int c = 30;
//
//    c = b = a;
//
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;

    system("pause");
    return 0;
}