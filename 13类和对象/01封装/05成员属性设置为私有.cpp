//
// Created by 22906 on 2025/4/9.
//
#include "iostream"

using namespace std;

//成员属性设置为私有
/**
 * 1、可以自己控制读写权限
 * 2、对于写可以检测数据的有效性
*/
//人类
class Person {
public:
    //设置姓名
    void setName(string name) {
        m_Name = name;
    }

    //获取信吗
    string getName() {
        return m_Name;
    }

    //获取年龄
    int getAge() {
        return m_Age;
    }

    //设置年龄（0~150）
    void setAge(int age) {
        if (age > 150 || age < 0) {
            cout << "年龄赋值失败" << endl;
            return;
        }
        m_Age = age;
    }

    //设置偶像
    void setIdol(string idol) {
        m_Idol = idol;
    }

private:
    string m_Name; //姓名 可读可写
    int m_Age = 18; //年龄 只度 也可以写（年龄必须在0-150之间）
    string m_Idol; //偶像 只写


};

int main() {

    Person p;
    //姓名设置
    p.setName("张三 ");
    //获取姓名
    cout << "姓名：" << p.getName() << endl;

    //年龄设置
    p.setAge(19);
    //获取年龄
    cout << "年龄：" << p.getAge() << endl;

    //设置偶像
    p.setIdol("小明");

    return 0;
}