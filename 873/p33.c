// 6．统计大写辅音字母。输人一个以回车结束的字符串(少于80个字符)，统计开输出其中大写辅音字母的个数。
// 大写辅音字母是指除 'A'， 'E'， 'T'， '0' ，'U'以外的大写字母。试编写相应程序。

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[81];
    int count = 0;
    int i = 0;

    // 输入字符串
    printf("Enter a string (terminated by Enter): ");
    fgets(str, sizeof(str), stdin);

    // 统计大写辅音字母的个数
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (isupper(str[i]) && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            count++;
        }
        i++;
    }

    // 输出结果
    printf("The number of uppercase consonants in the string: %d\n", count);

    return 0;
}
