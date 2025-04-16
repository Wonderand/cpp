//
// Created by 22906 on 2025/4/16.
//
#include "iostream"

using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU {
public:
    //抽象计算函数
    virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard {
public:
    //抽象显示函数
    virtual void display() = 0;
};

//抽象内存条类
class Memory {
public:
    //抽象存储函数
    virtual void storage() = 0;
};

//电脑类
class Computer {
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *men) {
        m_cpu = cpu;
        m_vc = vc;
        m_men = men;
    }

    //提供工作函数
    void work() {
        m_cpu->calculate();

        m_vc->display();

        m_men->storage();
    }

    //提供析构函数 释放3个电脑零件
    ~Computer() {
        cout << "开始释放零件" << endl;
        if (m_cpu != nullptr) {
            cout << "CPU" << endl;
            delete m_cpu;
            m_cpu = nullptr;
        }
        if (m_vc != nullptr) {
            cout << "显卡" << endl;
            delete m_vc;
            m_vc = nullptr;
        }
        if (m_men != nullptr) {
            cout << "内存" << endl;
            delete m_men;
            m_men = nullptr;
        }
    };
private:
    CPU *m_cpu; //cpu的零件指针

    VideoCard *m_vc; //显卡零件指针

    Memory *m_men; //内存条零件指针
};

//具体厂商
//intel厂商
class IntelCPU : public CPU {
public:
    virtual void calculate() {
        cout << "Intel的CPU开始计算了" << endl;
    }
};

class IntelVideoCard : public VideoCard {
    virtual void display() {
        cout << "Intel的显卡开始显示了！" << endl;
    }
};

class IntelMemory : public Memory {
    virtual void storage() {
        cout << "Intel的内存条开始存储了！" << endl;
    }
};

//Lenovo厂商
class LenovoCPU : public CPU {
public:
    virtual void calculate() {
        cout << "Lenovo的CPU开始计算了" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
    virtual void display() {
        cout << "Lenovo的显卡开始显示了！" << endl;
    }
};

class LenovoMemory : public Memory {
    virtual void storage() {
        cout << "Lenovo的内存条开始存储了！" << endl;
    }
};

void test01() {
    //第一台电脑的零件
    CPU *intelCPU = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCard;
    Memory *intelMen = new IntelMemory;

    //创建第一台电脑
    cout << "第一台电脑开始工作" << endl;
    Computer *computer1 = new Computer(intelCPU, intelCard, intelMen);
    computer1->work();
    delete computer1;

    //第二台电脑组装
    cout << "第二台电脑开始工作" << endl;
    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);

    computer2->work();
    delete computer2;

    cout << "第三台电脑开始工作" << endl;
    Computer *computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);

    computer3->work();
    delete computer3;

}

int main() {

    test01();
    return 0;
}