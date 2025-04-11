//
// Created by 22906 on 2025/4/10.
//
#include "iostream"

using namespace std;

//拷贝构造函数调用时机


class Person {
public:
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int age) {
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
    }

    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
    Person p1(20);
    Person p2(p1);

    cout << "p2的年龄为：" << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值
void doWork(Person p) {
}

void test02() {
    Person p;
    doWork(p);
}

//3、值方式返回局部对象
/**
 * 假设编译器应用了 RVO（这是大多数现代 C++ 编译器（如 GCC、Clang 或 MSVC）的标准，即使没有明确的优化标志），输出将是：
 * Person的默认构造函数调用
 * Person的析构函数调用
 *
 * 如果禁用 RVO（例如，使用 GCC 中的特定编译器标志 -fno-elide-constructors ），则可能会发生额外的复制：
 * Person的默认构造函数调用
 * Person的拷贝构造函数调用
 * Person的析构函数调用
 * Person的析构函数调用
 */
Person doWork2() {
    Person p1;
    cout << (long long) &p1 << endl;
    return p1;
}

void test03() {
    Person p = doWork2();
    cout << (long long) &p << endl;
}

int main() {
    system("chcp 65001");
//    test01();
//    test02();
    test03();

    system("pause");
    return 0;
}