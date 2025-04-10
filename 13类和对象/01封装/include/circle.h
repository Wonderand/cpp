//
// Created by 22906 on 2025/4/10.
//

#ifndef CPPPROJECT_CIRCLE_H
#define CPPPROJECT_CIRCLE_H
#pragma once

#include "iostream"
#include "point.h"

using namespace std;

class Circle {
public:
    //设置半径
    void setR(int r);

    //获取半径
    int getR();

    //获取圆心
    void setCenter(Point center);

    //获取圆心
    Point getCenter();

private:
    int m_R; //半径
    //在类中可以让另一个类 作为本类的成员
    Point m_Center; //圆心
};


#endif //CPPPROJECT_CIRCLE_H
