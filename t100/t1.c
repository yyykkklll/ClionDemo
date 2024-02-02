//
// Created by yklsfzy on 2024/1/29/0029.
//
#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) {
                if (i != j && i != k && j != k)
                    printf("%d%d%d\n", i, j, k);
            }
        }
    }
    return 0;
}