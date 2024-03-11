// 【练习7 - 10】查找指定字符。输入一个字符，再输入一个以回车符结束的字符串(少于80个字符)，在字符串中查找该字符。
// 如果找到，则输出该字符在字符串中所对应的最大下标，下标从0开始;否则输出“Not Found”。试编写相应程序。
#include <stdio.h>

#define MAXLINE 80

int main()
{
    char targetChar;
    char str[MAXLINE];
    int index = -1; // 初始化为-1，表示未找到

    // 输入目标字符
    printf("Enter a character to search for: ");
    scanf(" %c", &targetChar);

    // 输入字符串
    printf("Enter a string (up to 80 characters): ");
    fgets(str, sizeof(str), stdin);

    // 查找目标字符在字符串中的最大下标
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == targetChar)
        {
            index = i; // 更新最大下标
        }
    }

    // 输出结果
    if (index != -1)
    {
        printf("The character '%c' was found at index: %d\n", targetChar, index);
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}
