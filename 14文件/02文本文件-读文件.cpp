//
// Created by 22906 on 2025/4/17.
//
#include "iostream"
#include "fstream"

using namespace std;

//文本文件 读文件
void test01() {
    //1、包含头文件

    //2、创建流对象
    ifstream ifs;
    //3、打开文件 并且判断是否打开成功
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    //4、读数据
    //第一种
//    char buf[1024] = {0};
//    while (ifs >> buf) {
//        cout << buf << endl;
//    }
    //第二种
//    char buf1[1024] = {0};
//    while (ifs.getline(buf1, sizeof(buf1))) {
//        cout << buf1 << endl;
//    }

    //第三种
//    string buf2;
//    while (getline(ifs, buf2)) {
//        cout << buf2 << endl;
//    }

    //第四种
    char c;
    while ((c = ifs.get()) != EOF) { //EOF end of file
        cout << c;
    }

    //5、关闭文件
    ifs.close();
}

int main() {

    test01();
    return 0;
}