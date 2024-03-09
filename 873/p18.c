#include <stdio.h>

int main()
{
    int number, oddSum = 0;

    printf("输入正整数(以零或负数为结束标志):\n");

    while (1)
    {
        scanf("%d", &number);

        if (number <= 0)
        {
            break; // 输入零或负数，退出循环
        }

        if (number % 2 != 0)
        {
            oddSum += number; // 如果是奇数，累加到奇数和
        }
    }

    printf("奇数和为：%d\n", oddSum);

    return 0;
}
