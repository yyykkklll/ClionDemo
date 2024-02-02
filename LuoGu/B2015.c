//
// Created by yklsfzy on 2024/1/21/0021.
//
#include <stdio.h>

int main() {
    double r1, r2, R;
    scanf("%lf%lf", &r1, &r2);
    R = 1 / ((1 / r1) + (1 / r2));
    printf("%.2f\n", R);
    return 0;
}