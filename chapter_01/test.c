#include <stdio.h>
#include <string.h>
int main(void) {
    char s[] = "Hello, world!";
    char t[100];
    strcpy(t, s);
    t[0] = 'z';
    printf("%s\n", s);
    printf("%s\n", t);
}