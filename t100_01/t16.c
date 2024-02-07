/**
* @author yklsfzy
* @date 2024/2/2/0002 15:15:28
*/
#include <stdio.h>
void findMax(int a, int b, int c){
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("%d\n", max);
}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    findMax(a, b, c);
    return 0;
}