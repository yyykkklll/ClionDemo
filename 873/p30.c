#include <stdio.h>

int main()
{
    int n, i, j;

    // 输入菱形的高度
    printf("Enter the height of the diamond (must be odd): ");
    scanf("%d", &n);

    // 检查输入是否为奇数
    if (n % 2 == 0)
    {
        printf("Please enter an odd number.\n");
        return 1; // 结束程序
    }

    // 打印上半部分菱形
    for (i = 1; i <= n; i += 2)
    {
        // 打印空格
        for (j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
        // 打印星号
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 打印下半部分菱形
    for (i = n - 2; i >= 1; i -= 2)
    {
        // 打印空格
        for (j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
        // 打印星号
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
