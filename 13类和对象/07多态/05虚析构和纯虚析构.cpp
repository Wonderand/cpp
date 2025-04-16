//
// Created by 22906 on 2025/4/16.
//
#include "iostream"

using namespace std;

//虚析构和纯虚析构
/**
 * 总结：
 * 1、虚析构或者纯虚析构就是用来解决通过父类指针释放子类对象
 * 2、如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
 * 3、拥有纯虚析构函数的类也属于抽象类
 */
class Animal {
public:
    Animal() {
        cout << "Animal的构造函数调用" << endl;
    }

    //利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//    virtual ~Animal() {
//        cout << "Animal的析构函数调用" << endl;
//    }

    //纯虚析构 需要声明也需要实现
    //有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;

    //纯虚函数
    virtual void Speak() = 0;
};

Animal::~Animal() {
    cout << "Animal纯虚析构函数调用" << endl;
};

class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(name);
    }

    ~Cat() {
        if (m_Name != nullptr) {
            cout << "Cat的析构函数调用" << endl;
            delete m_Name;
            m_Name = nullptr;
        }
    }

    virtual void Speak() {
        cout << *m_Name << "小猫在说话" << endl;
    }

    string *m_Name;
};

void test01() {
    Animal *animal = new Cat("Tom");
    animal->Speak();
    //父类的指针在析构的时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露
    delete animal;
}

int main() {

    test01();
    return 0;
}