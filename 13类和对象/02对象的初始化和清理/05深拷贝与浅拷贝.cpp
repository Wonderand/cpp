//
// Created by 22906 on 2025/4/10.
//
#include "iostream"

using namespace std;

//深拷贝与浅拷贝

class Person {
public:
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int age, int height) {
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
    }

    //自己实现拷贝构造函数 解决浅拷贝带来的问题
    Person(const Person &p) {
        cout << "拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);
    }

    ~Person() {
        if (m_Height != nullptr) {
            delete m_Height;
            m_Height = nullptr;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age; //年龄
    int *m_Height; //身高
};

void test01() {
    Person p1(18, 160);
    cout << "p1的年龄为；" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为；" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;

}

int main() {

    system("chcp 65001");
    test01();
    system("pause");
    return 0;
}