#include <stdio.h>
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    printf("\nfirst:\n");
    for (int i = 0; i < 10; i++)
        printf("%d", arr[i]);
    printf("\nsecond:\n");
    for (int i = 0; i < 10; i++)
        printf("%d", *(arr + i));
    printf("\nthird:\n");
    for (int i = 0; i < 10; i++)
        printf("%d", *(p + i));
    return 0;
}