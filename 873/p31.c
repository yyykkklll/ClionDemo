/**
 * 10.猴子吃桃问题。一只猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个;第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半加一个。到第n天早上想再吃时，只剩下一个桃子了。问:第一天共摘了多少个桃子?试编写相应程序。(提示:采取逆向思维的方法，从后往前推断)
 */
#include <stdio.h>

int main()
{
    int n;
    int total = 1; // 第n天剩下的桃子数量

    // 输入天数n
    printf("Enter the number of days (n): ");
    scanf("%d", &n);

    // 逆向计算每天剩下的桃子数量
    for (int i = n - 1; i >= 1; i--)
    {
        total = (total + 1) * 2; // 第i天的桃子数量等于第i+1天的数量乘2再加1
    }

    // 输出结果
    printf("The total number of peaches on the first day is: %d\n", total);

    return 0;
}
