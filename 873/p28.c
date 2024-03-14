// 6．输出水仙花数。输入一个正整数n(3≤n≤7)，输出所有的n位水仙花数。水仙花数是指一个n位正整数，它的各位数字的n次幂之和等于它本身。
// 例如153的各位数字的立方和是13 + 53 + 33 = 153。试编写相应程序。
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int start = pow(10, n - 1); // 计算n位数的起始值
    int end = pow(10, n) - 1;   // 计算n位数的结束值

    // 输入正整数n
    printf("Enter a positive integer n (3 <= n <= 7): ");
    scanf("%d", &n);

    // 输出n位水仙花数
    printf("The %d-digit Narcissistic numbers are:\n", n);
    for (int i = start; i <= end; i++)
    {
        int number = i;
        int sum = 0;
        while (number > 0)
        {
            int digit = number % 10;
            sum += pow(digit, n);
            number /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
