// 11.兔子繁衍问题。一对兔子，从出生后第3个月起每个月都生一对兔子。
// 小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，
// 至少需要繁衍到第几个月时兔子总数才可以达到n对 ? 输人一个不超过10 000 的正整数n,
// 输出兔子总数达到n最少需要的月数。试编写相应程序。
#include <stdio.h>

int main()
{
    int n;
    int total = 1;    // 兔子总数
    int current = 1;  // 当前月份
    int previous = 0; // 前一个月的兔子总数
    int temp;         // 用于交换变量值

    // 输入兔子总对数n
    printf("Enter the total number of pairs of rabbits (n): ");
    scanf("%d", &n);

    // 计算兔子总数达到n最少需要的月数
    while (total < n)
    {
        temp = total;
        total += previous; // 当前月新增的兔子总数等于前一个月的兔子总数
        previous = temp;   // 更新前一个月的兔子总数
        current++;         // 当前月份加1
    }

    // 输出结果
    printf("The minimum number of months required for the total number of rabbits to reach %d pairs is: %d\n", n, current);

    return 0;
}
