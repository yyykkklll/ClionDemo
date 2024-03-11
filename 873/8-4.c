// 【练习6-3】英文字母转换。输人一行字符，将其中的英文字母转换后输出，
// 其他字符按原样输出。其中英文字母(a ~z或A ～Z)的转换规则是 :
// 将当前字母替换为字母表中的后一个字母，同时将小写字母转换为大写，大写字母转换为小写字母，
// 如 'a'->' B'、 'C'->'d'，但是 'Z'->'a'、 'z'->'A'。试编写相应程序。

#include <stdio.h>

void convertLetters(char str[]);

int main(void)
{
    char inputString[100];

    printf("Enter a line of characters: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Converted string: ");
    convertLetters(inputString);

    return 0;
}

void convertLetters(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
        {
            // Convert lowercase to uppercase and vice versa
            putchar(str[i] + 1 - 2 * (str[i] >= 'a' && str[i] <= 'z'));
        }
        else if (str[i] == 'z')
        {
            // Special case for 'z' to 'A'
            putchar('A');
        }
        else if (str[i] == 'Z')
        {
            // Special case for 'Z' to 'a'
            putchar('a');
        }
        else
        {
            // Print other characters unchanged
            putchar(str[i]);
        }

        i++;
    }
}
