//
// Created by 27565 on 2022/12/14.
//

#ifndef CLASSEGHIT_HOMEWORK_H
#define CLASSEGHIT_HOMEWORK_H
#include "stdio.h"
#include "stdlib.h"
#endif //CLASSEGHIT_HOMEWORK_H

//分析下面代码输出内容是什么
void MindController(){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            if( j == 2){
                break;
            }else{
                printf("%d",j);
            }
            printf("\n");
        }
    }
}// 结果：i = 0 i = 1 i = 0 i = 1 i = 0 i = 1 i = 0 i = 1
//结论：break会结束第二层内的循环 但是不会结束最外层的循环。

//课堂练习 判断一个整数 属于那个一范围 大于0 小于0 等于0
void recogInt(){
    int inputs;
    printf("请为inputs变量赋值 程序将为你判断这个变量是否符合运行规则\n");
    scanf("%d",&inputs);
    if(inputs == 0){
        printf("inputs变量是等于0的\n");
    }else if(inputs < 0 ){
        printf("inputs变量是小于0的\n");
    }else if(inputs > 0){
        printf("inputs变量是大于0的\n");
    }
}
//课堂练习 2 判断一个年份是否为闰年
void years(){
    int inputYear;
    printf("请在控制台中输入一个你想判断的年份\n");
    scanf("%d",&inputYear);
    if(inputYear % 4 == 0 && inputYear % 400 != 0){
        printf("%d年是闰年",inputYear);
    }else if(inputYear % 100 == 0 && inputYear % 400 != 0){
        printf("%d年是闰年",inputYear);
    }else{
        printf("%d年不是闰年",inputYear);
    }
}
//课堂练习 判断水仙花数
//判断一个数是否为水仙花数 所谓水仙花数是一个三位数 其中各个位数上数字的立方等于其本身
void numberSpeallty(){
    int inputsNumber;
    printf("请输入一个整型的三位数\n");
    scanf("%d",&inputsNumber);
    if(inputsNumber / 100 >= 10){
        printf("你输入的数字大于3位数的限制 程序已经为你关闭\n");
    }else if(inputsNumber >= 0){
        int hundred = inputsNumber / 100;//百位数能够被分离出来
        int decacy = (inputsNumber / 10) % 10;//十位数能够被分离出来
        int number = inputsNumber % 10;
        int sums = hundred * hundred * hundred + decacy * decacy * decacy + number * number * number;
        if(sums == inputsNumber){
            printf("该数是水仙花数\n");
        }else{
            printf("该数不是水仙花数\n");
        }
    }

}

//课堂练习 4
//程序判断题
void controller(){//初步判断 这个函数的
    int m = 0, n =3;
    if(m > 0){
        if(n > 2){
            printf("A");
        }else{
            printf("B");
        }
    }
}

//课堂练习5
void usernameAndPassword(){
    char username[] = "";
    scanf("%s",&username);
    if(username == "张三"){
        printf("这个用户是张三");
    }else{
        printf("这个用户不是张三\n");
    }
}



