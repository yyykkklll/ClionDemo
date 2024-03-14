// 9．分类统计字符个数 : 输人一行文字，统计其中的大写字母、小写字母、空格、数字
// 以及其他字符各有多少。试编写相应程序。
#include <stdio.h>

#define MAX_LEN 100

int main()
{
    char text[MAX_LEN];
    int uppercase = 0, lowercase = 0, digits = 0, spaces = 0, other = 0;
    int i = 0;

    // 输入文字
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // 统计字符个数
    while (text[i] != '\0')
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            uppercase++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            lowercase++;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            digits++;
        }
        else if (text[i] == ' ')
        {
            spaces++;
        }
        else
        {
            other++;
        }
        i++;
    }

    // 输出统计结果
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", other);

    return 0;
}
