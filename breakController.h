//
// Created by 27565 on 2022/12/14.
//

#ifndef CLASSEGHIT_BREAKCONTROLLER_H
#define CLASSEGHIT_BREAKCONTROLLER_H

#include "stdio.h"

#endif //CLASSEGHIT_BREAKCONTROLLER_H

#include "stdlib.h"//���ͷ�ļ��а���һ��rand()���� �ܹ����������

//���õ����� �������һ���� ֱ������97���� ������һ�����˼���
void breakController01() {

}


void breakController02() {
    for (int j = 0; j < 10; ++j) {
        if (j == 3) {
            break;//��j = 3��ʱ�� ִ�е�break��ʱ�� ����ǰ��ֹѭ��
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

//ʵ�ֵ�¼��֤ �����λ��� �û�����Ϊ���޼� ����888
//������ϰ
void breakController04(){
    char username[] = {};
    int password;
    for (int i = 0; i < 3; ++i) {
        printf("���������룺\n");
        scanf("%d",&password);
        if( password == 888){
            printf("�ɹ���֤ : %d",password);
            i = 3;
        }else{
            printf("��֤ʧ�� : %d",password);
        }
    }

}

//֪ʶ�㣺
//ͨ�������� ����˵�����������̿������ݵı�Ҫ�ԣ�����break
//�����﷨ ��ʹ����switch for while do whileѭ��������ʹ�ã�
//break ��ĳһ��ִ���������break������������ʱ�� ѭ���ᱻ��ǰ��ֹѭ��

