/**
* @author yklsfzy
* @date 2024/2/23/0023 17:15:04
*/
#include <stdio.h>

int main() {
    int n;
    printf("�ܱ�7��������:\n");
    for (n = 1; n <= 100; n++) {
        if (n % 7 == 0) {
            printf("%d\n", n);
            if (n % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}