// 7.字符串替换。输人一个以回车结束的字符串(少于80个字符)，将其中的大写字母用下面列出的对应大写字母替换，其余字符不变，输出替换后的字符串。试编写相应程序。
// 原字母对应字母A-Z B—→Y C—X D——→W X —→C Y—→B Z——A
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replaceUppercase(char *str);

int main()
{
    char str[81];

    // 输入字符串
    printf("Enter a string (terminated by Enter): ");
    fgets(str, sizeof(str), stdin);

    // 进行字符串替换
    replaceUppercase(str);

    // 输出替换后的字符串
    printf("Replaced string: %s\n", str);

    return 0;
}

void replaceUppercase(char *str)
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (isupper(str[i]))
        {
            switch (str[i])
            {
            case 'B':
                str[i] = 'Y';
                break;
            case 'C':
                str[i] = 'X';
                break;
            case 'D':
                str[i] = 'W';
                break;
            case 'X':
                str[i] = 'C';
                break;
            case 'Y':
                str[i] = 'B';
                break;
            case '7':
                str[i] = 'A';
                break;
            default:
                break;
            }
        }
    }
}
