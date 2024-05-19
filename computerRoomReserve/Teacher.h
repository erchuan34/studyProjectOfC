//
// Created by lenovo on 2024/5/19.
//

#ifndef COMPUTERROOMRESERVE_TEACHER_H
#define COMPUTERROOMRESERVE_TEACHER_H
#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>
#include "orderFile.h"
#include <vector>


class Teacher :public Identity{
public:
    //默认构造
    Teacher();

    //有参构造
    Teacher(int empId, string name, string pwd);

    //菜单界面
    virtual void operMenu();

    //查看所有预约
    void showAllOrder();

    //审核预约
    void validOrder();

    //职工号
    int m_EmpId;
};


#endif //COMPUTERROOMRESERVE_TEACHER_H
