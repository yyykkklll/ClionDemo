// 6．使用函数输出水仙花数:输入两个正整数m和n(1≤m，n≤1 000)，输出m~n之间的所有满足各位数字的立方和等于它本身的数。要求定义并调用函数 is ( number)判断number的各位数字之立方和是否等于它本身。试编写相应程序。
#include <stdio.h>

int isNarcissistic(int number);

int main()
{
    int m, n;

    // 输入范围
    printf("Enter two positive integers m and n (1 <= m, n <= 1000): ");
    scanf("%d %d", &m, &n);

    // 输出范围内的水仙花数
    printf("Narcissistic numbers between %d and %d:\n", m, n);
    for (int i = m; i <= n; i++)
    {
        if (isNarcissistic(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// 判断一个数是否为水仙花数
int isNarcissistic(int number)
{
    int original = number;
    int sum = 0;

    // 计算各位数字的立方和
    while (number != 0)
    {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    // 判断是否为水仙花数
    return sum == original;
}
