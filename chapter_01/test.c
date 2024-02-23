#include <stdio.h>
int main()
{
    char buf[1024];
    FILE *in = fopen("io_01.txt", "r");
    FILE *out = fopen("io_02.txt", "w");
    while (fgets(buf, 1024, in) != NULL)
    {
        fputs(buf, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}