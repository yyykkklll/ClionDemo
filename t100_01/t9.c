/**
 * @author yklsfzy
 * @date 2024/1/31/0031 14:22:56
 */

//题目：要求输出国际象棋棋盘。
#include <stdio.h>

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // 判断奇偶性来确定输出黑色格子还是白色格子
            if ((i + j) % 2 == 0) {
                printf("■ ");  // 输出黑色格子
            } else {
                printf("□ ");  // 输出白色格子
            }
        }
        printf("\n");
    }

    return 0;
}
