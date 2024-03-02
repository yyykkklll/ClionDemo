/**
 * @author yklsfzy
 * @date 2024/2/23/0023 17:35:10
 */
#include <stdio.h>

// 函数声明
int findGCD(int a, int b);

int findLCM(int a, int b);

int main()
{
    // 输入两个整数
    int num1, num2;
    printf("输入两个整数�?");
    scanf("%d %d", &num1, &num2);

    // 计算最大公约数并输�?
    int gcd = findGCD(num1, num2);
    printf("最大公约数�?%d\n", gcd);

    // 计算最小公倍数并输�?
    int lcm = findLCM(num1, num2);
    printf("最小公倍数�?%d\n", lcm);

    return 0;
}

// 函数定义：求最大公约数
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 函数定义：求最小公倍数
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}
