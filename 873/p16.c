#include <stdio.h>
int main()
{
    const char *s[3] = {"point ", " continue ", " break "};
    for (int i = 2; i >= 0; i--)
        for (int j = 2; j > i; j--)
            printf("%s \n ", s[i] + j);
    return 0;
}