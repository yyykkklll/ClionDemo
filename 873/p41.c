// 3．使用函数输出指定范围内的完数 : 输人两个正整数m和n(1≤m，n≤1 000)，输出m ~n之间的所有完数，完数就是因子和与它本身相等的数。要求定义并调用函数factorsum(number)，它的功能是返回number 的因子和。例如，factorsum(12) 的返回值是16(1 + 2 + 3 + 4 + 6)。试编写相应程序。

#include <stdio.h>

int factorsum(int number);
void printPerfectNumbers(int m, int n);

int main()
{
    int m, n;

    // 输入范围
    printf("Enter two positive integers m and n (1 <= m, n <= 1000): ");
    scanf("%d %d", &m, &n);

    // 输出范围内的完数
    printf("Perfect numbers between %d and %d:\n", m, n);
    printPerfectNumbers(m, n);

    return 0;
}

// 计算一个数的因子和
int factorsum(int number)
{
    int sum = 1; // 1是所有数的因子之一，所以初始值为1
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
            if (i * i != number)
            { // 避免重复加入因子
                sum += number / i;
            }
        }
    }
    return sum;
}

// 输出指定范围内的完数
void printPerfectNumbers(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        if (factorsum(i) == i)
        {
            printf("%d\n", i);
        }
    }
}
