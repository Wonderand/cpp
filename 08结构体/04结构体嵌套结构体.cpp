//
// Created by 22906 on 2025/3/26.
//
#include "iostream"

using namespace std;
//定义学生结构体
struct student {
    string name; //姓名
    int age; //年龄
    int score; //分数
};

//定义老师结构体
struct teacher {
    int id; //编号
    string name; //教师姓名
    int age; //年龄
    struct student stu; //辅导的学生
};

int main() {

    //结构体嵌套结构体
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "老师的姓名：" << t.name << " 老师的年龄：" << t.age << " 老师的编号:" << t.id
         << " 老师辅导的学生姓名:" << t.stu.name << " 年龄：" << t.stu.age << " 学生的考试分数:" << t.stu.score << endl;

    return 0;
}