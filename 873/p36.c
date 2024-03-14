// 4．求矩阵各行元素之和。输入2个正整数m和n(1≤m≤6，1≤n≤6)，然后输人矩阵a(m行n列) 中的元素，分别求出各行元素之和，并输出。试编写相应程序。
#include <stdio.h>

int main()
{
    int m, n;

    // 输入矩阵的行数和列数
    printf("Enter the number of rows (m, 1 <= m <= 6): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n, 1 <= n <= 6): ");
    scanf("%d", &n);

    // 声明矩阵并输入元素
    int a[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 求各行元素之和并输出
    printf("Sum of elements in each row:\n");
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }

    return 0;
}
