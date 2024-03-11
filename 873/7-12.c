// 【例7-12】凯撒密码。为了防止信息被别人轻易窃取，
//  需要把电码明文迪过加密万式变换成为密文。输入一个以回车符为结束标志的字符串(少于80个字符)，
// 再输入一个正整数offset，用凯撒密码将其加密后输出。
//  凯撒密码是一种简单的替换加密技术，将明文中的所有字母都在字母表上向后偏移offset位后被替换成密文。
//  例如，当偏移量offset是2时，表示所有的字母被向后移动2位后的字母替换，即所有的字母A将被替换成C，字母B将变为D……字母X变成Z，字母Y则变为A，字母Z变为B。
#include <stdio.h>
#define MAXLINE 80
#define M 26
int main()
{
    int i, offset;
    char str[MAXLINE];
    printf("Enter a string : ");
    i = 0;
    while ((str[i] = getchar()) != ' \n')
    {
        i++;
    }
    str[i] = '\0';
    printf(" Enter offset : ");
    scanf("%d ", &offset);
    if (offset >= M)
    {
        offset = offset % M;
    }
    /*加密*/
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if ((str[i] - 'A' + offset) < M)
            {
                str[i] = str[i] + offset;
            }
            else
            {
                str[i] = str[i] - (M - offset);
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            if ((str[i] - 'a' + offset) < M)
            {
                str[i] = str[i] + offset;
            }
            else
            {
                str[i] = str[i] - (M - offset);
            }
        }
    }
    printf("After being encrypted : ");
    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    printf(" \n");
    return 0;
}
