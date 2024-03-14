// 【练习8-8】输入一个字符串，把该字符串的前3个字母移到最后，
// 输出变换后的字符串。比如输入“abcdef”，输出为“defabc”。

#include <stdio.h>
#include <string.h>

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
    if (strlen(str) >= 3)
    {
        // 将前三个字母移到字符串末尾
        char temp[4]; // 保存前三个字母的临时数组
        strncpy(temp, str, 3);
        temp[3] = '\0';                         // 添加字符串结束符
        memmove(str, str + 3, strlen(str) - 2); // 移动剩余的字符
        strcat(str, temp);                      // 将前三个字母添加到末尾
    }
}
