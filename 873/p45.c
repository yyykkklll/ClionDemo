// 【练习7 - 3】将数组中的数逆序存放。输入一个正整数n(1 < n≤10)，再输入n个整数，存入数组α中，先将数组α中的这n个数逆序存放，再按顺序输出数组α中的n个元素。试编写相应程序。

#include <stdio.h>

int main()
{
    int n;

    // 输入正整数n
    printf("Enter a positive integer n (1 < n <= 10): ");
    scanf("%d", &n);

    // 输入n个整数并存入数组alpha
    int alpha[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &alpha[i]);
    }

    // 逆序存放数组alpha中的数
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = alpha[i];
        alpha[i] = alpha[j];
        alpha[j] = temp;
    }

    // 输出数组alpha中的n个元素
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", alpha[i]);
    }
    printf("\n");

    return 0;
}
