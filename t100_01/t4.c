/**
 * @author yklsfzy
 * @date 2024/1/30/0030 20:24:15
 */

//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬
//��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣

#include <stdio.h>

int main() {
    int year, month, day, sum, leap;
    printf("�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
    scanf("%d,%d,%d", &year, &month, &day);
    switch (month) {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum = 59;
            break;
        case 4:
            sum = 90;
            break;
        case 5:
            sum = 120;
            break;
        case 6:
            sum = 151;
            break;
        case 7:
            sum = 181;
            break;
        case 8:
            sum = 212;
            break;
        case 9:
            sum = 243;
            break;
        case 10:
            sum = 273;
            break;
        case 11:
            sum = 304;
            break;
        case 12:
            sum = 334;
            break;
        default:
            printf("�����·�����\n");
            break;
    }
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        leap = 1;
    else
        leap = 0;
    if (leap == 1 && month > 2)
        sum++;
    printf("������ꡢ�¡���Ϊ��%d��%d��%d�գ�����һ��ĵ�%d��\n", year, month, day, sum + day);
    return 0;
}