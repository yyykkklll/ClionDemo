/**
 * @author yklsfzy
 * @date 2024/1/31/0031 14:29:41
 */

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }
    return 0;
}