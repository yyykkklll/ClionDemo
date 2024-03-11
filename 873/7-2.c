// 【例7-2】利用数组计算斐波那契数列。利用数组计算斐波那契数列的前n个数(1≤n≤46)，
// 即1，1，2，3，5，8，…，并按每行打印5个数的格式输出，如果最后一行的输出少于5个数，
// 也需要换行。
#include <stdio.h>
#define MAXN 46
int main(void)
{
    int i, n;
    int fib[MAXN] = {1, 1};
    printf("Enter n: ");
    scanf("%d ", &n);
    if (n >= 1 && n <= 46)
    {

        for (i = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        for (i = 0; i < n; i++)
        {
            printf("%6d", fib[i]);
            if ((i + 1) % 5 == 0)
            {
                printf(" \n ");
            }
        }
        if (n % 5 != 0)
        {
            printf(" \n");
        }
    }
    else
    {
        printf("Invalid value.\n"); /*输出错误提示*/
    }
    return 0;
}
