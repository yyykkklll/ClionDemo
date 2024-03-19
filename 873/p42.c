// 6．使用函数输出一个整数的逆序数 : 输人一个整数，将它逆序输出。要求定义并调用函数reverse(number)，它的功能是返回number 的逆序数。例如, reverse(12345) 的返回值是54321。试编写相应程序。
#include <stdio.h>

int reverse(int number);

int main()
{
    int number;

    // 输入整数
    printf("Enter an integer: ");
    scanf("%d", &number);

    // 输出逆序数
    int reversedNumber = reverse(number);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

// 返回一个整数的逆序数
int reverse(int number)
{
    int reversedNumber = 0;
    while (number != 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return reversedNumber;
}
