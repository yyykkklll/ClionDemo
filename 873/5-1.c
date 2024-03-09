#include <stdio.h>
int sum_01(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum: %d\n", sum);
    return sum;
}
int sum_02(int n, int m)
{
    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        sum += i;
    }
    printf("sum: %d\n", sum);
    return sum;
}
int main()
{
    sum_01(2);
    sum_02(2, 3);
    return 0;
}