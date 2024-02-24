/**
 * @author yklsfzy
 * @date 2024/2/23/0023 17:12:41
 */
#include <stdio.h>
int main()
{
    int year;
    printf("please input a number");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("it is not a leap year");
    }
    return 0;
}