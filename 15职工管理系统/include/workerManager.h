//
// Created by 22906 on 2025/5/25.
//
#pragma once //防止头文件重复包含

#include "iostream" //包含输入输出流头文件
#include "worker.h"

using namespace std; //使用标准命名空间

#ifndef CPP_WORKERMANAGER_H
#define CPP_WORKERMANAGER_H


class workerManager {
public:
    //构造函数
    workerManager();

    //展示菜单
    void Show_Menu();

    //退出系统
    void ExitSystem();

    //记录职工的人数
    int m_EmpNum;

    //职工数组的指针
    Worker **m_EmpArray;

    //添加职工
    void Add_Emp();

    //析构函数
    ~workerManager();
};

#endif //CPP_WORKERMANAGER_H
