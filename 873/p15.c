#include <stdio.h>

void reverse(int num) {
    if (num <= 9)
        printf("%d", num);
    else {
        printf("%d", num % 10);
        reverse(num / 10);
    }
}

int main() {
    reverse(123);
    return 0;
}
