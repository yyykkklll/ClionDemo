/**
 * @author yklsfzy
 * @date 2024/1/31/0031 22:58:12
 */

#include <stdio.h>
void swap_01(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_02(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main(){
    int firsrnumber,secondnumber;
    printf("Enter the two numbers: ");
    scanf("%d%d", &firsrnumber, &secondnumber);
    printf("Before swap: %d %d\n", firsrnumber, secondnumber);
    swap_02(&firsrnumber, &secondnumber);
    printf("After swap: %d %d\n", firsrnumber, secondnumber);
    return 0;
}