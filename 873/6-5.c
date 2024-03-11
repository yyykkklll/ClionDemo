// 【例6-5】输入一行字符，统计其中单词的个数。所谓“单词”是指连续不含空格的字符串，
//  各单词之间用空格分隔，空格数可以是多个。

#include <stdio.h>
int main()
{
    int cnt, word;
    char ch;
    word = cnt = 0;
    printf(" Input characters: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            word = 0;
        }
        else if (word == 0)
        {
            word = 1;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}