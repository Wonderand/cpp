//
// Created by 22906 on 2025/4/16.
//
#include "iostream"

using namespace std;

//多态案例二 制作饮品
class AbstractBrinking {
public:
    //煮水
    virtual void Biol() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅料
    virtual void PutSometing() = 0;

    //制作饮品
    void makeDrink() {
        Biol();
        Brew();
        PourInCup();
        PutSometing();
    }
};

//制作咖啡
class Coffee : public AbstractBrinking {
public:
    //煮水
    virtual void Biol() override {
        cout << "煮农夫山泉" << endl;
    }

    //冲泡
    virtual void Brew() override {
        cout << "冲泡咖啡" << endl;
    }

    //倒入杯中
    virtual void PourInCup() override {
        cout << "倒入杯中" << endl;
    };

    //加入辅料
    virtual void PutSometing() override {
        cout << "加入糖和牛奶" << endl;
    }
};

//制作茶叶
class Tea : public AbstractBrinking {
public:
    //煮水
    virtual void Biol() override {
        cout << "煮农夫山泉" << endl;
    }

    //冲泡
    virtual void Brew() override {
        cout << "冲泡茶叶" << endl;
    }

    //倒入杯中
    virtual void PourInCup() override {
        cout << "倒入杯中" << endl;
    };

    //加入辅料
    virtual void PutSometing() override {
        cout << "加入枸杞" << endl;
    }
};

void doWork(AbstractBrinking *abs) {
    abs->makeDrink();

    delete abs;
}

void test01() {
    //制作咖啡
    doWork(new Coffee);

    cout << "---------------" << endl;
    //制作茶叶
    doWork(new Tea);
}

int main() {

    test01();
    return 0;
}