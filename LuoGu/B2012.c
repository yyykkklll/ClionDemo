//
// Created by yklsfzy on 2024/1/21/0021.
//
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%.3lf%%", (double) b * 100 / a);
    return 0;
}