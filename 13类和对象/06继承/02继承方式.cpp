//
// Created by 22906 on 2025/4/15.
//
#include "iostream"

using namespace std;

//继承方式

//公共继承
class Base1 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1 {
public:
    void func() {

        m_A = 10; //父类中的公共权限成员 到子类中依然是公共权限
        m_B = 20; //父类中的保护权限成员 到子类中依然是保护权限
//        m_C = 10; //父类中的私有权限成员 子类访问不到
    }
};

//保护继承
class Son2 : protected Base1 {
public:
    void func() {
        m_A = 100; //父类中公共成员 到子类中变为保护权限
        m_B = 100; //父类中保护成员 到子类中变为保护权限
//        m_C = 100; //父类中的私有权限成员 子类访问不到
    }
};

//私有继承
class Son3 : private Base1 {
public:
    void func() {
        m_A = 100; //父类中公共成员 到子类中变为 私有成员
        m_B = 100; //父类中保护成员 到子类中变为 私有成员
//        m_C = 100; //父类中的私有权限成员 子类访问不到
    }

};

class GrandSon3 : public Son3 {
public:
    void func() {
//        m_A = 1000; //到了son3中 m_A变为私有，即使是儿子，也是访问不到
//        m_B = 1000; //到了son3中 m_B变为私有，即使是儿子，也是访问不到

    }

};

void test01() {

    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100; //到Son1中 m_B是保护权限 类外访问不到

}

void test02() {
    Son2 s2;
//    s2.m_A = 1000; //在son2中 m_A变为保护权限，因此类外访问不到
//    s2.m_B = 1000; //在son2中 m_B保护权限 不可以访问
}

void test03() {
    Son3 s3;
//    s3.m_A = 1000; //在son3中 m_A变为私有成员，因此类外访问不到
//    s3.m_B = 1000; //在son3中 m_B变为私有成员 因此类外访问不到
}


int main() {

    return 0;
}