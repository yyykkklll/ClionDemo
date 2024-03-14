#include <stdio.h>

void transformString(char *str);

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    transformString(inputString);

    printf("Transformed string: %s\n", inputString);

    return 0;
}

void transformString(char *str)
{
    if (str[0] != '\0' && str[1] != '\0' && str[2] != '\0')
    {
        char temp1 = str[0];
        char temp2 = str[1];
        char temp3 = str[2];

        int i = 0;
        while (str[i + 3] != '\0')
        {
            str[i] = str[i + 3];
            i++;
        }

        str[i] = temp1;
        str[i + 1] = temp2;
        str[i + 2] = temp3;
        str[i + 3] = '\0';
    }
}
