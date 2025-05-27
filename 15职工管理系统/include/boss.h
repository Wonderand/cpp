//
// Created by 22906 on 2025/5/27.
//
#pragma
#include "iostream"
#include "worker.h"
#ifndef CPPPROJECT_BOSS_H
#define CPPPROJECT_BOSS_H


class Boss : public Worker{
public:
    //构造函数
    Boss(int id, string name,int dId);
    //显示个人信息
    virtual void showInfo();
    //获取岗位名称
    virtual string getDeptName();
};


#endif //CPPPROJECT_BOSS_H
