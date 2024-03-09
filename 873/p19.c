//【例5-3】使用函数判断完全平方数。定义一个判断完全平方数的函数IsSquare(n), 
// 当n为完全平方数时返回1，否则返回0，不允许调用数学库函数

#include <stdio.h>
    int isSqures(int n)
{
    int i;
    for (int i = 0; n > 0; i = i + 2)
    {
        n = n - i;
    }
    if (n == 0)
        return 1;   //是平方数
    else
        return 0;  // 不是平方数
}
int main()
{
    return 0;
}