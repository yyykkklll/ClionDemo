#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    // �ж�����
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int lowerLimit = 100;
    int upperLimit = 200;

    printf("100 �� 200 ֮�����������:\n");

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
