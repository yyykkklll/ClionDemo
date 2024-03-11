#include <stdio.h>
int main()
{
    int i, n = 5, x, a[10] = {1, 3, 5, 7, 9};
    scanf("%d ", &x);
    for (i = n - 1; i >= 0; i--)
        if (x < a[i])
            a[i + 1] = a[i];
        else
            break;
    a[i + 1] = x;
    n++;
    printf("%d ", i + 1);
    return 0;
}