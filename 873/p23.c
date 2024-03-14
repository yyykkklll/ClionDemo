// 5．使用函数实现字符串复制 : 输人一个字符串t和一个正整数m，将字符串t中从第m个字符开始的全部字符复制到字符串s中，再输出字符串 s。
// 要求自定义并调用函数void strmcpy(char *s，char *t，int m)。试编写相应程序。

#include <stdio.h>

// 函数声明
void strmcpy(char *s, char *t, int m);

int main()
{
    char s[100], t[100];
    int m;

    // 输入字符串t和正整数m
    printf("Enter a string t: ");
    scanf("%s", t);
    printf("Enter a positive integer m: ");
    scanf("%d", &m);

    // 调用函数复制字符串
    strmcpy(s, t, m);

    // 输出复制后的字符串s
    printf("Copied string s: %s\n", s);

    return 0;
}

// 字符串复制函数
void strmcpy(char *s, char *t, int m)
{
    // 移动指针t到第m个字符位置
    t += (m - 1);

    // 复制字符串t中从第m个字符开始的全部字符到字符串s
    while (*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }

    // 在复制结束后添加字符串结束符
    *s = '\0';
}
