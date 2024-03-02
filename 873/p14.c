/**
* @author yklsfzy
* @date 2024/3/3/0003 17:46:35
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
        return true;
    }
}

int main() {
    int lowLimit = 1, highLimit = 100;
    for (int i = lowLimit; i <= highLimit; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}


