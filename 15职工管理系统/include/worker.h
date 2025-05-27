//
// Created by 22906 on 2025/5/27.
//
#pragma

#include "iostream"

using namespace std;
#ifndef CPPPROJECT_WORKER_H
#define CPPPROJECT_WORKER_H

//职工抽象类
class Worker {
public:
    //显示个人信息
    virtual void showInfo();
    //获取岗位名称
    virtual string getDeptName() = 0;
    //职工编号
    int m_Id;
    //职工姓名
    string m_Name;
    //部门编号
    int m_DeptId;

};


#endif //CPPPROJECT_WORKER_H
