//
// Created by 27565 on 2022/12/14.
//

#ifndef CLASSEGHIT_BREAKCONTROLLER_H
#define CLASSEGHIT_BREAKCONTROLLER_H

#include "stdio.h"

#endif //CLASSEGHIT_BREAKCONTROLLER_H

#include "stdlib.h"//这个头文件中包含一个rand()函数 能够生成随机数

//课堂导引课 随机生成一个数 直到生成97个数 看看你一共用了几次
void breakController01() {

}


void breakController02() {
    for (int j = 0; j < 10; ++j) {
        if (j == 3) {
            break;//当j = 3的时候 执行到break的时候 会提前终止循环
        } else {
            printf("%d\n", j);
        }
    }
}

void breakController03(){
    int sum = 0;
    for (int i = 0; i < 100; ++i) {
        sum += i;
        if(sum > 20){
            break;
        }else{
            printf("%d\n",i);
        }
    }
}

//实现登录验证 有三次机会 用户名字为张无忌 密码888
//课堂练习
void breakController04(){
    char username[] = {};
    int password;
    for (int i = 0; i < 3; ++i) {
        printf("请输入密码：\n");
        scanf("%d",&password);
        if( password == 888){
            printf("成功验证 : %d",password);
            i = 3;
        }else{
            printf("验证失败 : %d",password);
        }
    }

}

//知识点：
//通过该需求 可以说明当其他流程控制数据的必要性，比如break
//基本语法 （使用在switch for while do while循环都可以使用）
//break 当某一个执行语句满足break的跳出条件的时候 循环会被提前终止循环

