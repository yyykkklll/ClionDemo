#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int isPalindrome(char str[]);

int main()
{
    char str[MAX_LEN];

    // 输入字符串
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 判断是否是回文
    if (isPalindrome(str))
    {
        printf("The string \"%s\" is a palindrome.\n", str);
    }
    else
    {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

// 判断是否是回文函数
int isPalindrome(char str[])
{
    int len = strlen(str);
    int i;

    // 逐个字符比较
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0; // 不是回文
        }
    }

    return 1; // 是回文
}
