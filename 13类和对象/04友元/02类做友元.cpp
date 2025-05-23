//
// Created by 22906 on 2025/4/11.
//
#include "iostream"

using namespace std;

//类做友元
class Building;

class GoodGay {
public:
    GoodGay();

    void visit(); //参观函数 访问building中的属性
    Building *building;
};

class Building {
    //GodGay类是本类的好朋友，可以访问本类中私有成员
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom; //卧室
};


//类外写成员函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    //创建建筑物对象
    building = new Building;
}

void GoodGay::visit() {
    cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test01() {

    GoodGay gg;
    gg.visit();
}

int main() {

    test01();

    return 0;
}