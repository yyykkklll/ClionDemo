#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char str[]);

int main()
{
    char str[1000];

    // 输入一行字符
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // 将每个单词的首字母改为大写并输出
    capitalizeWords(str);

    return 0;
}

// 将每个单词的首字母改为大写并输出
void capitalizeWords(char str[])
{
    int i = 0;

    // 遍历字符串中的每个字符
    while (str[i] != '\0')
    {
        // 如果当前字符是字母且前一个字符是空格或是句点，则将当前字母改为大写
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '.') && isalpha(str[i]))
        {
            putchar(toupper(str[i]));
        }
        else
        {
            putchar(str[i]);
        }
        i++;
    }
}
