#include <stdio.h>

void reverse_01(int num)
{
    if (num <= 9)
        printf("%d", num);
    else
    {
        printf("%d", num % 10);
        reverse_01(num / 10);
    }
}

void reverse_02(int num)
{
    if (num < 0)
        num = -num;
    do
    {
        printf("%d", num % 10);
        num /= 10;
    } while (num != 0);
}

int main()
{
    reverse_02(123);

    return 0;
}
