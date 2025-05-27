//
// Created by 22906 on 2025/5/27.
//
//普通与员工文件
#pragma

#include "iostream"
#include "worker.h"
using namespace std;
#ifndef CPPPROJECT_EMPLOYEE_H
#define CPPPROJECT_EMPLOYEE_H


class Employee : public Worker {
public:
    //构造函数
    Employee(int id, string name,int dId);
    //显示个人信息
    virtual void showInfo();
    //获取岗位名称
    virtual string getDeptName();
};


#endif //CPPPROJECT_EMPLOYEE_H
