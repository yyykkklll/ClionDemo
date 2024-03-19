#include <stdio.h>

int fn(int a, int n);
int sum(int a, int n);

int main()
{
    int a, n;

    // 输入整数a和n
    printf("Enter a positive integer a: ");
    scanf("%d", &a);
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // 计算并输出a+aa+aaa+...+a(n个a)之和
    int result = fn(a, n);
    printf("The sum of the series is: %d\n", result);

    return 0;
}

// 计算由n个a构成的整数
int fn(int a, int n)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        number = number * 10 + a;
    }
    return number;
}

// 计算a+aa+aaa+...+a(n个a)之和
int sum(int a, int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += fn(a, i);
    }
    return total;
}
