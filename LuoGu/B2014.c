//
// Created by yklsfzy on 2024/1/21/0021.
//
#include <stdio.h>
#define PI 3.14159
int main(){
    double r,d,perimeter,area;
    scanf("%lf",&r);
    d=2*r;
    perimeter=2*PI*r;
    area=PI*r*r;
    printf("%.4f %.4f %.4f",d,perimeter,area);
    return 0;
}