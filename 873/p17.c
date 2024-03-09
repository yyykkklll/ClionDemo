#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        { // 打印空格
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        { // 打印星号
            printf("*");
        }
        printf("\n"); // 换行
    }
    return 0;
}