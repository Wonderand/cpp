//
// Created by 22906 on 2025/3/27.
//
#include "iostream"

using namespace std;

//const使用场景

struct student {

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

//函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//指针指向的值不可以改，指针的指向可以改
void printStudents(const student *s) {
//    s -> score = 100; //加入const后，一旦有修改的操作就会报错，可以防止我们的误操作
    //更改指向
//    student s1;
//    s = &s1;
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main() {

    //创建结构体变量
    struct student s = {
            "张三", 15, 80
    };

    //通过函数打印结构体变量信息
    printStudents(&s);
    return 0;
}