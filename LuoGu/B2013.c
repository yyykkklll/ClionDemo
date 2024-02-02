//
// Created by yklsfzy on 2024/1/21/0021.
//
#include <stdio.h>

int main() {
    double C, F;
    scanf("%lf", &F);
    C = 5 * (F - 32) / 9.0;
    printf("%.5lf", C);
    return 0;
}