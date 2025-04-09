//
// Created by 22906 on 2025/4/9.
//
#include "iostream"

using namespace std;

//圆周率
const double PI = 3.14;

//设计一个圆类，求圆的周长
//求圆周长公式：2 * PI * r
//class代表一个类，类后面紧跟着的就是类名称
class Circle {
    //访问权限
    //公共权限
public:
    //属性
    int m_r; //半径

    //行为
    //获取圆周长
    double calculateZC() {
        return 2 * PI * m_r;
    }
};

int main() {

    //通过圆类创建具体的圆(对象)
    //实例化 （通过一个类 创建一个对象的过程）
    Circle circle;
    //给圆对象 的属性进行赋值
    circle.m_r = 10;

    cout << "圆的周长是：" << circle.calculateZC() << endl;

    return 0;
}