/**
 * @author yklsfzy
 * @date 2024/1/31/0031 14:22:56
 */

//��Ŀ��Ҫ����������������̡�
#include <stdio.h>

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // �ж���ż����ȷ�������ɫ���ӻ��ǰ�ɫ����
            if ((i + j) % 2 == 0) {
                printf("�� ");  // �����ɫ����
            } else {
                printf("�� ");  // �����ɫ����
            }
        }
        printf("\n");
    }

    return 0;
}
