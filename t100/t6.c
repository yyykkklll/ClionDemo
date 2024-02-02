/**
 * @author yklsfzy
 * @date 2024/1/31/0031 12:01:01
 */

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
        swap(&x, &y);
    if (x > z)
        swap(&x, &z);
    if (y > z)
        swap(&y, &z);
    printf("The sorted numbers are %d, %d, %d\n", x, y, z);
    return 0;
}