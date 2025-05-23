//
// Created by 22906 on 2025/4/16.
//
#include "iostream"

using namespace std;

//纯虚构函数和抽象类
class Base {
public:
    //纯虚函数
    //只要有一个纯虚构函数，这个类被称为抽象类
    //抽象类特点
    //1、无法实例化对象
    //2、抽象类的子类 必须要重写父类中的虚构函数，否则也属于抽象类
    virtual void func() = 0;
};

class Son : public Base {
public:
    virtual void func() {
        cout << "virtual void func()调用" << endl;
    }
};

void test01() {
//    Base b; //抽象类无法实例化对象
//    new Base; //抽象类无法实例化对象
    Son s; //子类必须重写父类中的纯虚构函数，否则无法实例化对象

    Base *base = new Son;
    base->func();

    delete base;
}

int main() {

    test01();
    return 0;
}