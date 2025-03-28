//
// Created by 22906 on 2025/3/28.
//
#include "iostream"

using namespace std;

//1、设计英雄结构体
struct hero {
    string name; //姓名
    int age; //年龄
    string sex; //性别
};

//冒泡排序实现年龄升序排列
void bubbleSort(struct hero heroArray[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            //如果j下标的年龄 大于 j+1下标的元素的年龄，交换两个元素
            if (heroArray[j].age > heroArray[j + 1].age) {
                hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

//打印排序后数组中的信息
void printHero(struct hero heroArray[], int len) {

    for (int i = 0; i < len; ++i) {
        cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age << " 性别：" << heroArray[i].sex << endl;
    }

}

int main() {

    //2、创建数组存放5名英雄
    struct hero heroArray[5] = {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"张飞", 20, "男"},
            {"赵云", 21, "男"},
            {"貂蝉", 18, "女"}
    };

    //3、对数组进行排序，按照年龄进行升序排列
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    cout << "排序前的打印为：" << endl;
    for (int i = 0; i < len; ++i) {
        cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age << " 性别：" << heroArray[i].sex << endl;
    }
    bubbleSort(heroArray, len);
    //4、将排序后结果进行打印输出
    cout << "排序后的打印为：" << endl;
    printHero(heroArray, len);

    return 0;
}