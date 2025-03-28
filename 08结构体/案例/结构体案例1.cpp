//
// Created by 22906 on 2025/3/28.
//
#include "iostream"
#include <ctime>

using namespace std;

//定义学生结构体
struct student {
    string sName; //姓名
    int score; //分数
};

//老师结构体定义
struct teacher {
    //姓名
    string tName;
    //学生数组
    struct student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct teacher tArray[], int len) {
    string nameSeed = "ABCDE";
    //给老师开始赋值
    for (int i = 0; i < len; ++i) {
        tArray[i].tName = "teacher_";
        tArray[i].tName += nameSeed[i];

        //通过循环给每名老师带的学生进行赋值
        for (int j = 0; j < 5; ++j) {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];

            int random = rand() % 60 + 40;
            tArray[i].sArray[j].score = random;
        }

    }
}

//打印所有信息
void printInfo(struct teacher tArray[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << "老师姓名：" << tArray[i].tName << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "\t学生的姓名：" << tArray[i].sArray[j].sName
                 << " 学生的分数：" << tArray->sArray[j].score << endl;
        }
    }
}

int main() {

    //随机数种子
    srand((unsigned int) time(NULL));

    //1、创建三名老师的数组
    struct teacher tArray[3];
    //2、通过函数给三名老师的信息赋值，并且给老师带的学生信息赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    //3、打印所有老师及所带的学生信息
    printInfo(tArray, len);
    return 0;
}