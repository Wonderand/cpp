//
// Created by 22906 on 2025/4/10.
//

#include "circle.h"

//设置半径
void Circle::setR(int r) {
    m_R = r;
}

//获取半径
int Circle::getR() {
    return m_R;
}

//获取圆心
void Circle::setCenter(Point center) {
    m_Center = center;
}

//获取圆心
Point Circle::getCenter() {
    return m_Center;
}
