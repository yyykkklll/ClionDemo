// 3．判断上三角矩阵。输入一个正整数n(1≤n≤6)和n阶方阵a中的元素，如果a是上三角矩阵，输出“YES”，否则，输出“NO”。
// 上三角矩阵指主对角线以下的元素都为О的矩阵，主对角线为从矩阵的左上角至右下角的连线。试编写相应程序。
#include <stdio.h>

int main()
{
    int n;
    int isUpperTriangle = 1; // 默认假设为上三角矩阵

    // 输入矩阵阶数n
    printf("Enter the order of the square matrix (1 <= n <= 6): ");
    scanf("%d", &n);

    // 输入矩阵元素并判断是否为上三角矩阵
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num;
            scanf("%d", &num);
            // 主对角线以上的元素必须为 0
            if (i > j && num != 0)
            {
                isUpperTriangle = 0; // 不是上三角矩阵
            }
        }
    }

    // 输出判断结果
    if (isUpperTriangle)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
