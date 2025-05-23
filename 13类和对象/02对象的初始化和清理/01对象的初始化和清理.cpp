//
// Created by 22906 on 2025/4/10.
//
#include "iostream"

using namespace std;

//对象的初始化和清理
//1、构造函数进行初始化操作
class Person {
    //1.1、构造函数
    /**
     * 构造函数没有返回值 不用写void
     * 函数名 与类名相同
     * 构造函数可以有参数，可以发生重载
     * 在创建对象的时候，构造函数会自动调用，而且只调用一次
     */
public:
    Person() {
        cout << "Person构造函数的调用" << endl;
    }
    //2、析构函数进行清理的操作
    /**
     * 没有返回值 不写void
     * 函数名和类名相同 在名称前面加上~
     * 析构函数不可以有参数，所以不可以发生重载
     * 对象在销毁前 会自动调用析构函数，而且只会调用一次
     */
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }
};

//构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01() {
    Person p; //在栈上的数据，test01执行完毕后，释放这个对象
}

int main() {

    system("chcp 65001");
//    test01();
    Person p;
    system("pause");
    return 0;
}