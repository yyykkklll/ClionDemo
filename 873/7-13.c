// 【例7 - 13】字符转换。输人一个以回车符为结束标志的字符串(少于10个字符)，
// 提取其中的所有数字字符('0'，…， '9')，将其转换为一个十进制整数输出。
#include <stdio.h>
#define MAX 10
int main()
{
    int i = 0, number;
    char str[MAX];
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n')
        i++;
    str[i] = '\0';
    number = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            number = number * 10 + str[i] - '0';
    }
    printf("%d\n", number);
    return 0;
}