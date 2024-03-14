// 【例8-4】输入年份和天数,输出对应的年、月、日。
//  要求定义和调用函数month_day( int year,int yearday,int *pmonth,int * pday),
//  其中 year是年,yearday是天数,pmonth和pday指向的变量保存计算得出的月和日。
// 例如,输入2000和61,输出2000-3-1,即2000年的第61天是3月1 日。
/*使用指针作为函数参数返回多个函数值的示例*/
#include <stdio.h>
void month_day(int year, int yearday, int *pmonth, int *pday);

int main()
{

    int day, month, year, yearday;
    printf(" input year and yearday : ");
    scanf("%d%d ", &year, &yearday);
    month_day(year, yearday, &month, &day);
    printf(" %d-%d-%d\n ", year, month, day);
    return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int k, leap;
    int tab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},

    };
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for (k = 1; yearday > tab[leap][k]; k++)
        yearday -= tab[leap][k];
    *pmonth = k;
    *pday = yearday;
}