// 4．求序列和。输入两个正整数α和n，求a + aa + aaa + aa…a(n个a) 之和。
// 例如，输入2和3，输出246(2 + 22 + 222)。试编写相应程序。
#include <stdio.h>

int main()
{
    int a, n;
    int sum = 0;
    int term = 0;

    // 输入正整数a和n
    printf("Enter a positive integer a: ");
    scanf("%d", &a);
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // 计算序列和
    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + a; // 计算当前项
        sum += term;          // 累加到总和
    }

    // 输出结果
    printf("The sum of the series is: %d\n", sum);

    return 0;
}
