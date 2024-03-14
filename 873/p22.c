// 3．循环后移 : 有n个整数，使前面各数顺序向后移m个位置，移出的数再从开头移人。
// 编写一个函数实现以上功能，在主函数中输入n个整数并输出调整后的n个数。试编写相应程序。
#include <stdio.h>

// 函数声明
void shiftArray(int arr[], int n, int m);

int main()
{
    int n, m;

    // 输入整数个数n和向后移动的位置m
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter the number of positions to shift: ");
    scanf("%d", &m);

    int arr[n];

    // 输入n个整数
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 调用函数实现循环后移
    shiftArray(arr, n, m);

    // 输出调整后的n个数
    printf("Shifted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 循环后移函数
void shiftArray(int arr[], int n, int m)
{
    int temp[m];

    // 将前m个数存储在临时数组中
    for (int i = 0; i < m; i++)
    {
        temp[i] = arr[i];
    }

    // 将后面的数向前移动m个位置
    for (int i = 0; i < n - m; i++)
    {
        arr[i] = arr[i + m];
    }

    // 将临时数组中的数放到数组末尾
    for (int i = 0; i < m; i++)
    {
        arr[n - m + i] = temp[i];
    }
}
