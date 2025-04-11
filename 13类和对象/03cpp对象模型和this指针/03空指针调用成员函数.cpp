//
// Created by 22906 on 2025/4/11.
//
#include "iostream"

using namespace std;

//空指针调用成员函数
class Person {
public:
    void showClassName() {
        cout << "this is Person class" << endl;
    }

    void showPersonAge() {
        //报错原因是传入的指针为空
        if (this == nullptr) {
            return;
        }
        cout << "age = " << this->m_Age << endl;
    }

    int m_Age;
};

void test01() {
    Person *p = nullptr;
    p->showClassName();
    p->showPersonAge();
}

int main() {
    system("chcp 65001");

    test01();

    system("pause");
    return 0;
}