//
// Created by 27565 on 2022/12/14.
//

#ifndef CLASSEGHIT_HOMEWORK_H
#define CLASSEGHIT_HOMEWORK_H
#include "stdio.h"
#include "stdlib.h"
#endif //CLASSEGHIT_HOMEWORK_H

//��������������������ʲô
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
}// �����i = 0 i = 1 i = 0 i = 1 i = 0 i = 1 i = 0 i = 1
//���ۣ�break������ڶ����ڵ�ѭ�� ���ǲ������������ѭ����

//������ϰ �ж�һ������ �����Ǹ�һ��Χ ����0 С��0 ����0
void recogInt(){
    int inputs;
    printf("��Ϊinputs������ֵ ����Ϊ���ж���������Ƿ�������й���\n");
    scanf("%d",&inputs);
    if(inputs == 0){
        printf("inputs�����ǵ���0��\n");
    }else if(inputs < 0 ){
        printf("inputs������С��0��\n");
    }else if(inputs > 0){
        printf("inputs�����Ǵ���0��\n");
    }
}
//������ϰ 2 �ж�һ������Ƿ�Ϊ����
void years(){
    int inputYear;
    printf("���ڿ���̨������һ�������жϵ����\n");
    scanf("%d",&inputYear);
    if(inputYear % 4 == 0 && inputYear % 400 != 0){
        printf("%d��������",inputYear);
    }else if(inputYear % 100 == 0 && inputYear % 400 != 0){
        printf("%d��������",inputYear);
    }else{
        printf("%d�겻������",inputYear);
    }
}
//������ϰ �ж�ˮ�ɻ���
//�ж�һ�����Ƿ�Ϊˮ�ɻ��� ��νˮ�ɻ�����һ����λ�� ���и���λ�������ֵ����������䱾��
void numberSpeallty(){
    int inputsNumber;
    printf("������һ�����͵���λ��\n");
    scanf("%d",&inputsNumber);
    if(inputsNumber / 100 >= 10){
        printf("����������ִ���3λ�������� �����Ѿ�Ϊ��ر�\n");
    }else if(inputsNumber >= 0){
        int hundred = inputsNumber / 100;//��λ���ܹ����������
        int decacy = (inputsNumber / 10) % 10;//ʮλ���ܹ����������
        int number = inputsNumber % 10;
        int sums = hundred * hundred * hundred + decacy * decacy * decacy + number * number * number;
        if(sums == inputsNumber){
            printf("������ˮ�ɻ���\n");
        }else{
            printf("��������ˮ�ɻ���\n");
        }
    }

}

//������ϰ 4
//�����ж���
void controller(){//�����ж� ���������
    int m = 0, n =3;
    if(m > 0){
        if(n > 2){
            printf("A");
        }else{
            printf("B");
        }
    }
}

//������ϰ5
void usernameAndPassword(){
    char username[] = "";
    scanf("%s",&username);
    if(username == "����"){
        printf("����û�������");
    }else{
        printf("����û���������\n");
    }
}



