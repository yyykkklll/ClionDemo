#include <stdio.h>
int main()
{
    FILE *in, *out;
    char ch;
    in = fopen("io_01.txt", "r");
    out = fopen("io_02.txt", "w");
    ch = fgetc(in);
    while (ch != EOF)
    {
        fputc(ch, out);
        ch = fgetc(in);
    }
    fclose(in);
    fclose(out);
    return 0;
}