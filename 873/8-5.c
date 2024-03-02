#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void exchange(int *a, int *b, int *c)
{
    if (*b > *c)
        swap(b, c);
    if (*a > *c)
        swap(a, c);
    if (*a > *b)
        swap(a, b);
}
int main()
{
    int x, y, z;
    printf("please enter:");
    scanf("%d%d%d", &x, &y, &z);
    exchange(&x, &y, &z);
    printf("%d %d %d", x, y, z);
    return 0;
}
