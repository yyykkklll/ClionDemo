#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, world!";
    char r[100];
    memcpy(r, s, strlen(s));
    printf("%s\n", r);
    return 0;
}