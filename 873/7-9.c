// 【例7-9】方阵转置。输人一个正整数n(1<n≤6)，
//  根据下式生成一个n × n的方阵，将该方阵转置(行列互换) 后输出。

#include <stdio.h>
#define MAXN 6

int main()
{
    int i, j, n, temp;
    int a[MAXN][MAXN];
    printf("Enter n: ");
    scanf("%d ", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = i * n + j + 1;
        }
    }
    // 转置矩阵
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf(" \n ");
    }
    return 0;
}
