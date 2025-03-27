//
// Created by 22906 on 2025/3/27.
//
#include "iostream"

using namespace std;

//定义学生结构体
struct student {

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

//打印学生信息函数
//1、值传递
void printStudent1(struct student s) {
    s.age = 50;
    cout << "在子函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
};

//2、地址传递
void printStudent2(struct student * p){
    p -> age = 100;
    cout << "子函数2中打印 姓名：" << p -> name << " 年龄：" << p -> age << " 分数：" << p -> score << endl;
}
int main() {

    //结构体做函数的参数
    //将学生传入到一个参数中打印学生的信息

    //创建结构体变量
    struct student s;
    s.name = "张三";
    s.age = 18;
    s.score = 86;
    //如果不想修改主函数中的数据，用值传递，反之用地址传递
    printStudent1(s);
    printStudent2(&s);
    cout << "在main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

    return 0;
}