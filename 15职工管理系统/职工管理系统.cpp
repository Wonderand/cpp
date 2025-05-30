//
// Created by 22906 on 2025/5/25.
//
#include "iostream"
#include "include/workerManager.h"
//#include "include/worker.h"
//#include "include/employee.h"
//#include "include/manager.h"
//#include "include/boss.h"

using namespace std;

int main() {
    system("chcp 65001");

    //测试代码  g++ -Iinclude -o program .\职工管理系统.cpp .\include\employee.cpp .\include\workerManager.cpp .\include\worker.cpp .\include\boss.cpp .\include\manager.cpp
//    Worker *worker = nullptr;
//    worker = new Employee(1, "张三", 1);
//    worker->showInfo();
//    delete worker;
//
//    worker = new Manager(2,"李四",2);
//    worker->showInfo();
//    delete worker;
//
//    worker = new Boss(3,"王五",3);
//    worker->showInfo();
//    delete worker;

    //实例化管理者对象
    workerManager wm;

    int choice = 0; //用来存储用户的选项

    while (true) {
        //调用成员函数
        wm.Show_Menu();

        cout << "请输入您的选择：" << endl;
        cin >> choice; //接收用户的选项

        switch (choice) {
            case 0: //退出系统
                wm.ExitSystem();
                break;
            case 1: //增加职工
                wm.Add_Emp();
                break;
            case 2: //显示职工
                break;
            case 3: //删除职工
                break;
            case 4: //修改职工
                break;
            case 5: //查找职工
                break;
            case 6: //排序职工
                break;
            case 7: //清空文档
                break;
            default:
                system("cls"); //清屏
                break;
        }
    }

    system("pause");
    return 0;
}