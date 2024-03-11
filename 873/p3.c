/**
* @author 水仙花数
* @date 2024/2/23/0023 17:20:41
*/
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int a = number % 10; // 1
    int b = number / 10 % 10; // 23
    int c = number / 100;
    if (a * a * a + b * b * b + c * c * c == number)
        printf("true");
    else
        printf("false");
    return 0;
}
