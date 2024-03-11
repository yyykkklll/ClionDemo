#include <stdio.h>
int main()
{
    int arr[10], n;
    double average, sum;
    printf("enter n:");
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {
        printf("Enter %d integers: ", n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        average = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > average)
                printf(">average:%d ", arr[i]);
        }
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}