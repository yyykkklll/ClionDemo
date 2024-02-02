/**
* @author yklsfzy
* @date 2024/2/2/0002 15:19:35
*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d,x1, x2;
    printf("Enter a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a != 0) {
        d = sqrt(b * b - 4 * a * c);
        if (d > 0) {
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            printf("x1=%f,x2=%f\n", x1, x2);
        } else if (d == 0) {
            x1 = (-b) / (2 * a);
            printf("x1=%f\n", x1);
        } else {
            printf("No real solution\n");
        }
    }
    return 0;
}