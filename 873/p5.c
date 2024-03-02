#include <stdio.h>

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
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    return a * b / gcd;
}
int main()
{
    int gcd = findGCD(21, 9);
    int lcm = findLCM(21, 9);
    printf("%d %d\n", gcd, lcm);
    return 0;
}