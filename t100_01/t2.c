/*
** Created by yklsfzy on 2024/1/30/0030.
*/

//��Ŀ����ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������
//����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ������˫���ȸ���(double)�͡�
#include <stdio.h>
int main(){
    double I;
    printf("�����뵱������");
    scanf("%lf", &I);
    if(I<=100000){
        printf("����Ϊ%f", I*0.1);
    }else if(I>100000&&I<=200000){
        printf("����Ϊ%f", (I-100000)*0.075+10000);
    }else if(I>200000&&I<=400000)
        printf("����Ϊ%f", (I-200000)*0.05+10000+20000);
    else if(I>400000&&I<=600000)
        printf("����Ϊ%f", (I-400000)*0.03+10000+20000+40000);
    else if(I>600000&&I<=1000000)
        printf("����Ϊ%f", (I-600000)*0.015+10000+20000+40000+60000);
    else
        printf("����Ϊ%f", (I-1000000)*0.01+10000+20000+40000+60000+100000);
    return 0;
}