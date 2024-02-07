/**
 * @author yklsfzy
 * @date 2024/1/31/0031 14:10:54
 */
#include <stdio.h>

int main() {
    int res;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            res = i * j;
            printf("%d*%d=%-3d", i, j, res);
        }
        printf("\n");
    }
    return 0;
}