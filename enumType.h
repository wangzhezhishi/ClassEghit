//
// Created by 27565 on 2022/12/19.
// ö���������� -- > ���ڹ�����������

#ifndef CLASSEGHIT_ENUMTYPE_H
#define CLASSEGHIT_ENUMTYPE_H

#include <string.h>
#include "stdio.h"
#endif //CLASSEGHIT_ENUMTYPE_H
//ö����һ�鳣���ļ��� ����һ�����޵��ض�������
//ö�ٶ�ӦӢ�� enumeration
//��Ӧ�﷨ enum ö���� ö��Ԫ��1 ö��Ԫ��2
void enumerrations(){
    enum Day{//�����day��ö���������͵ı���
        mon = 1,tue = 2, wed = 3 , thu = 4, fri = 5,sat = 6,sun = 7 //��ö�ٱ�����ֵ day����ö�ٱ���
    };//ÿ��ö��Ԫ�ض�Ӧһ��ֵ
    enum Day day;
    day = mon;
    printf("%d\n",day);
    getchar();
}

//ö�ٵı���
void enumForController(){
    enum  Day{
        mon = 3,tue,wed,thu,fri,sat,sun //���û�и�����ö���������ݳ�ʼ�� ��ô����ݵ�һ��ֵ���е���
    };
    enum  Day day;
    for (day = mon; day <= sun; day++) {
        printf("ö��Ԫ��day = \n%d",day);
    }
}

void stringComparasion(){
    char a[] = "username";
    char b[] = "username";
    int as = strcmp(a,b);
    printf("%d",as);
}

//ö�����͵�ÿ��Ԫ�ض���Ӧһ����ֵ
//ö�������ص�
//�Զ�����
//���޸� �������ٵ�����¿���ʹ��ö������

//ö�����͵�ʹ�ù����ע������
