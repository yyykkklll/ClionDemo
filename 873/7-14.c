// 【练习7 - 11】字符串逆序。输人一个以回车符结束的字符串(少于80个字符)，
// 将该字符串逆序存放, 输出逆序后的字符串。试编写相应程序。

#include <stdio.h>
#include <string.h>

#define MAXLINE 80

int main()
{
    char str[MAXLINE];

    // 输入字符串
    printf("Enter a string (up to 80 characters): ");
    fgets(str, sizeof(str), stdin);

    // 计算字符串长度
    int length = strlen(str);

    // 逆序存放字符串
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        // 交换字符
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // 输出逆序后的字符串
    printf("Reversed string: %s\n", str);

    return 0;
}
