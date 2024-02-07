/**
 * @author yklsfzy
 * @date 2024/1/31/0031 14:29:41
 */

#include <stdio.h>

int main() {
    int steps;

    printf("Enter the number of steps for the stairs: ");
    scanf("%d", &steps);

    // 打印楼梯和笑脸
    for (int i = 1; i <= steps; i++) {
        // 打印楼梯
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 打印笑脸
    printf("  :-)   :-)  \n");

    return 0;
}
