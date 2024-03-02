#include <stdio.h>
int main()
{
    int n, i = 1;
    float sum = 0.0;
    scanf("%d", &n);
    while (i <= n)
    {
        sum += 1 / (2 * i - 1);
        i++;
    }
    printf("%.3f", sum);
    return 0;
}