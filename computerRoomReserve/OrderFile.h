//
// Created by lenovo on 2024/5/19.
//

#ifndef COMPUTERROOMRESERVE_ORDERFILE_H
#define COMPUTERROOMRESERVE_ORDERFILE_H
#pragma once
#include <iostream>
using namespace std;
#include "globalFile.h"
#include <fstream>
#include <map>
#include <string>

class OrderFile
{
public:

    //构造函数
    OrderFile();

    //更新预约记录
    void updateOrder();

    //记录预约条数
    int m_Size;

    //记录所有预约信息的容器  key记录条数   value 具体记录键值对信息
    map<int, map<string, string>> m_orderData;

};


#endif //COMPUTERROOMRESERVE_ORDERFILE_H
