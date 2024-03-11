// 【例7-8】求矩阵的最大值。输入两个正整数m和n(1≤m，n≤6)，
//  再输入1个m×n的矩阵，找出最大值以及它的行下标和列下标。假设最大值唯一。
#include <stdio.h>
#define MAXN 6
#define MAXM 6
int main()
{
    int row = 0, col = 0;
    int matrix[MAXM][MAXN];
    for (int i = 0; i < MAXM; i++)
    {
        for (int j = 0; j < MAXN; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < MAXN; i++)
    {
        for (int j = 0; j < MAXM; j++)
        {
            if (matrix[i][j] > matrix[row][col])
            {
                row = i;
                col = j;
            }
        }
    }
    printf("%d %d\n", matrix[row][col], row + 1);
    return 0;
}