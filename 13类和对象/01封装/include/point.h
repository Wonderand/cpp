//
// Created by 22906 on 2025/4/10.
//

#ifndef CPPPROJECT_POINT_H
#define CPPPROJECT_POINT_H
#pragma once

#include "iostream"

using namespace std;

class Point {
public:
    //设置x坐标
    void setX(int x);

    //获取x坐标
    int getX();

    //设置y坐标
    void setY(int y);

    //获取y坐标
    int getY();

private:
    int m_X;
    int m_Y;
};


#endif //CPPPROJECT_POINT_H
