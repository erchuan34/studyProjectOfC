//
// Created by lenovo on 2024/5/19.
//

#ifndef COMPUTERROOMRESERVE_IDENTITY_H
#define COMPUTERROOMRESERVE_IDENTITY_H
#pragma once
#include<iostream>
#include<string>

using namespace std;
//身份抽象类
class Identity {
public:
    //操作菜单
    virtual void operMenu()=0;
    //用户名
    string m_Name;
    //用户密码
    string m_Pwd;


};


#endif //COMPUTERROOMRESERVE_IDENTITY_H
