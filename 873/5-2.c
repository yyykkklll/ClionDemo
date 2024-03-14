// 3．求序列和。输人一个正整数n，输出2 / 1 + 3 / 2 + 5 / 3 + 8 / 5 +…的前n项之和，
// 保留2位小数。该序列从第2项起，每一项的分子是前项分子与分母的和，分母是前一项的分子。试编写相应程序。
#include <stdio.h>

int main()
{
    int n;
    double sum = 2.0;                          // 初始化第一项
    double numerator = 2.0, denominator = 1.0; // 初始化第二项的分子和分母

    // 输入正整数n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // 计算序列和
    for (int i = 2; i <= n; i++)
    {
        double temp = numerator;
        numerator += denominator;
        denominator = temp;
        sum += numerator / denominator;
    }

    // 输出结果，保留2位小数
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
