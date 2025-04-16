//
// Created by 22906 on 2025/4/16.
//
#include "iostream"

using namespace std;

//动物类
class Animal {
public:
    int m_Age;
};

//利用虚继承 解决菱形继承问题
//在继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep : virtual public Animal {

};

//驼类
class Tuo : virtual public Animal {

};

//羊驼
class SheepTuo : public Sheep, public Tuo {

};

void test01() {
    SheepTuo st;

    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;

    //当出现菱形继承的时候，有两个父类拥有相同的数据，需要加以作用域区分
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Sheep::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;

    //这份数据我们知道 只要有一份就可以，菱形继承导致数据有两份，资源浪费
}

int main() {

    test01();
    return 0;
}