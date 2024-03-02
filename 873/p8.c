#include <stdio.h>
#include <string.h>
int isEqual(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s1[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if (strcmp(str1, str2) == 0)
        printf("str1 == str2");
    else
        printf("str1 != str2");
    printf("\n");
    if (isEqual(str1, str2) == 0)
        printf("str1 != str2");
    else
        printf("str1 == str2");
    return 0;
}