// s2．使用函数求奇数和 : 输人一批正整数(以零或负数为结束标志)，求其中的奇数和。要求定义和调用函数even(n) 判断数的奇偶性，当n为偶数时返回1，否则返回0。试编写相应程序。
#include <stdio.h>

int isEven(int n);

int main()
{
    int num;
    int oddSum = 0;

    // 输入正整数，直到输入零或负数为止
    printf("Enter positive integers (enter 0 or a negative number to end):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num <= 0)
        {
            break;
        }
        // 判断是否为奇数，如果是奇数则加到奇数和中
        if (!isEven(num))
        {
            oddSum += num;
        }
    }

    // 输出奇数和
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

// 判断是否为奇数，是返回0，否则返回1
int isEven(int n)
{
    return n % 2 == 0;
}
