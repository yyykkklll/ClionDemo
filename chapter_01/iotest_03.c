#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "hello world";
    FILE *f = fopen("io_01.txt", "w");
    fputs(str, f);
    fclose(f);
    return 0;
}