// 6．删除字符 : 输入一个字符串，再输人一个字符ch，
// 将字符串中所有的ch字符删除后输出该字符串。要求定义和调用函数delchar(s，c)，
// 该函数将字符串s中出现的所有c字符删除。试编写相应程序。
#include <stdio.h>

// 函数声明
void delchar(char *s, char c);

int main()
{
    char str[100], ch;

    // 输入字符串
    printf("Enter a string: ");
    scanf("%s", str);

    // 输入要删除的字符
    printf("Enter the character to delete: ");
    scanf(" %c", &ch);

    // 调用函数删除字符
    delchar(str, ch);

    // 输出删除字符后的字符串
    printf("Resulting string after deleting character '%c': %s\n", ch, str);

    return 0;
}

// 删除字符函数
void delchar(char *s, char c)
{
    char *src = s; // 源指针
    char *dst = s; // 目标指针

    // 逐个字符遍历字符串
    while (*src != '\0')
    {
        // 如果当前字符不是要删除的字符，复制到目标位置
        if (*src != c)
        {
            *dst = *src;
            dst++;
        }
        src++;
    }

    // 在最后位置添加字符串结束符
    *dst = '\0';
}
