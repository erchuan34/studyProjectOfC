//
// Created by lenovo on 2024/5/19.
//

#ifndef COMPUTERROOMRESERVE_STUDENT_H
#define COMPUTERROOMRESERVE_STUDENT_H
#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Identity.h"
#include "ComputerRoom.h"


class Student : public Identity{
public:
    //Ĭ�Ϲ���
    Student();
    //�вι���  ������ѧ�š�����������
    Student(int id,string name,string pwd);

    //�˵�����
    virtual void operMenu();

    //����ԤԼ
    void applyOrder();

    //�鿴����ԤԼ
    void showMyOrder();

    //�鿴����ԤԼ
    void showAllOrder();

    //ȡ��ԤԼ
    void cancelOrder();

    //ѧ��ѧ��
    int m_Id;

    //��������
    vector<ComputerRoom> vCom;

};


#endif //COMPUTERROOMRESERVE_STUDENT_H
