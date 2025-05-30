//
// Created by 22906 on 2025/5/25.
//
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

workerManager::workerManager() {
    //初始化属性
    this->m_EmpNum = 0;
    this->m_EmpArray = nullptr;
}

workerManager::~workerManager() {

}

//展示菜单
void workerManager::Show_Menu() {
    cout << "********************************************" << endl;
    cout << "********** 欢迎使用职工管理系统！***********" << endl;
    cout << "************** 0.退出管理系统 **************" << endl;
    cout << "************** 1.增加职工信息 **************" << endl;
    cout << "************** 2.显示职工信息 **************" << endl;
    cout << "************** 3.删除职工信息 **************" << endl;
    cout << "************** 4.修改职工信息 **************" << endl;
    cout << "************** 5.查找职工信息 **************" << endl;
    cout << "************** 6.按照编号排序 **************" << endl;
    cout << "************** 7.清空所有文档 **************" << endl;
    cout << "********************************************" << endl;
}

//退出系统
void workerManager::ExitSystem() {
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0); //退出程序
}

//添加职工
void workerManager::Add_Emp() {
    cout << "请输入添加职工数量：" << endl;

    int addNum = 0; //保存用户的输入数量
    cin >> addNum;

    if (addNum > 0) {
        //添加
        //计算新的空间大小
        int newSize = this->m_EmpNum + addNum; //新空间人数 = 原来记录人数 + 新增人数

        //开辟新空间
        Worker **newSpace = new Worker *[newSize];
        if (this->m_EmpArray != nullptr) {
            for (int i = 0; i < m_EmpNum; ++i) {
                newSpace = this->m_EmpArray;
            }
        }
        //批量添加新数据
        for (int i = 0; i < addNum; ++i) {
            int id; //职工编号
            string name; //职工姓名
            int dSelect; //部门选项

            cout << "请输入第 " << i + 1 << "个新职工编号：" << endl;
            cin >> id;

            cout << "请输入第 " << i + 1 << "个新职工姓名：" << endl;
            cin >> name;

            cout << "请选择该职工的岗位：" << endl;
            cout << "1.普通职工：" << endl;
            cout << "2.经理：" << endl;
            cout << "3.老板：" << endl;

            cin >> dSelect;

            Worker *worker = nullptr;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
            }
            //将创建的职工指针，保存到数组中
            newSpace[this->m_EmpNum + i] = worker;
        }
        //释放原有空间
        delete[] this->m_EmpArray;

        //更改新空间指向
        this->m_EmpArray = newSpace;

        //更新新的职工人数
        this->m_EmpNum = newSize;

        //成功添加后 保存到文件中

        //提示添加成功
        cout << "成功添加" << addNum << "名新职工！" << endl;

    } else {
        cout << "数据输入有误" << endl;
    }
    //按任意键后 清屏回到上一级目录
    system("pause");
    system("cls");
};