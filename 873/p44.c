// 【练习7 - 2】求最大值及其下标。输人一个正整数n(1 < n≤10)，再输入n个整数，输出最大值及其对应的最小下标，下标从0开始。试编写相应程序。
#include <stdio.h>

int main()
{
    int n;

    // 输入正整数n
    printf("Enter a positive integer n (1 < n <= 10): ");
    scanf("%d", &n);

    // 输入n个整数
    int numbers[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // 寻找最大值及其下标
    int max_value = numbers[0];
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > max_value)
        {
            max_value = numbers[i];
            max_index = i;
        }
    }

    // 输出最大值及其下标
    printf("Maximum value: %d\n", max_value);
    printf("Index of maximum value: %d\n", max_index);

    return 0;
}
