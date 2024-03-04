#include <stdio.h>

int main() {
    int countLower = 0, countHigher = 0, countSpace = 0, countNumber = 0;
    char str[100];
    char *p = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            countLower++;
        } else if (*p >= 'A' && *p <= 'Z') {
            countHigher++;
        } else if (*p == ' ') {
            countSpace++;
        } else if (*p >= '0' && *p <= '9') {
            countNumber++;
        }
        p++;
    }

    printf("Lowercase letters: %d\n", countLower);
    printf("Uppercase letters: %d\n", countHigher);
    printf("Spaces: %d\n", countSpace);
    printf("Numbers: %d\n", countNumber);

    return 0;
}
