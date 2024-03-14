// 5．使用函数统计指定数字的个数 : 读人一个整数，统计并输出该数中“2”的个数。要求定义并调用函数countdigit(number，digit)，它的功能是统计整数number中数字digit的个数。例如, countdigit(12 292，2) 的返回值是3。试编写相应程序。
#include <stdio.h>

int countDigit(int number, int digit);

int main()
{
    int number, digit;

    // 输入整数和要统计的数字
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    // 统计数字出现的次数并输出
    int count = countDigit(number, digit);
    printf("Number of occurrences of digit %d in %d: %d\n", digit, number, count);

    return 0;
}

// 统计数字在整数中出现的次数
int countDigit(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}
