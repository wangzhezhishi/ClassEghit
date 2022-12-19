//
// Created by 27565 on 2022/12/19.
// 枚举数据类型 -- > 属于构造数据类型

#ifndef CLASSEGHIT_ENUMTYPE_H
#define CLASSEGHIT_ENUMTYPE_H

#include <string.h>
#include "stdio.h"
#endif //CLASSEGHIT_ENUMTYPE_H
//枚举是一组常量的集合 包含一组有限的特定的数据
//枚举对应英文 enumeration
//对应语法 enum 枚举名 枚举元素1 枚举元素2
void enumerrations(){
    enum Day{//这里的day是枚举数据类型的变量
        mon = 1,tue = 2, wed = 3 , thu = 4, fri = 5,sat = 6,sun = 7 //给枚举变量赋值 day就是枚举变量
    };//每个枚举元素对应一个值
    enum Day day;
    day = mon;
    printf("%d\n",day);
    getchar();
}

//枚举的遍历
void enumForController(){
    enum  Day{
        mon = 3,tue,wed,thu,fri,sat,sun //如果没有给其他枚举类型数据初始化 那么会根据第一个值进行递增
    };
    enum  Day day;
    for (day = mon; day <= sun; day++) {
        printf("枚举元素day = \n%d",day);
    }
}

void stringComparasion(){
    char a[] = "username";
    char b[] = "username";
    int as = strcmp(a,b);
    printf("%d",as);
}

//枚举类型的每个元素都对应一个数值
//枚举类型特点
//自动叠加
//有限个 条件较少的情况下可以使用枚举类型

//枚举类型的使用规则和注意事项
