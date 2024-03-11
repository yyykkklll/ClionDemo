#include <stdio.h>

int main()
{
    int x, one, two, five, exit = 0;
    printf("enter x:\n");
    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个一角,%d个两角，%d个五角 凑出%d元\n", one, two, five, x);
                    exit = 1;
                }
            }
        }
    }
    if (exit == 0)
    {
        printf("no\n");
    }
    return 0;
}
