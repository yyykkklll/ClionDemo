#include <stdio.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "world";
    char s[20];
    snprintf(s, 10, "%s %s", str1, str2);
    printf("%s\n", s);
    return 0;
}
