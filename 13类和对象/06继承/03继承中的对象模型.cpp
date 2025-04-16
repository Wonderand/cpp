//
// Created by 22906 on 2025/4/15.
//
#include "iostream"

using namespace std;

//继承中的对象模型
class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base {
public:
    int m_D;
};

/**
 * 利用开发人员命令提示工具x64 Native Tools Command Prompt forVS 2022 查看对象模型
 * 跳转盘符以及文件目录
 * 查看命令
 * cl /d1 reportSingleClassLayout类名 文件名
 */
void test01() {

    //16
    //父类中的所有非静态成员属性都会被子类继承下去
    //父类中的私有属性 是被编译器给隐藏了，因此访问不到，但是确实被继承下去了
    cout << "size of Son = " << sizeof(Son) << endl;
}

int main() {

    test01();
    return 0;
}