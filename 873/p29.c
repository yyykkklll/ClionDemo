// 8．高空坠球。皮球从height(米)高度自由落下，触地后反弹到原高度的一半，再落下，
// 再反弹……如此反复。问皮球在第n次落地时，在空中一共经过多少距离 ?
// 第n次反弹的高度是多少 ? 输出保留1位小数。试编写相应程序。

#include <stdio.h>

int main()
{
    float height;
    int n;
    float total_distance = 0;
    float bounce_height;

    // 输入初始高度和次数n
    printf("Enter the initial height (in meters): ");
    scanf("%f", &height);
    printf("Enter the number of bounces (n): ");
    scanf("%d", &n);

    // 计算总距离和第n次反弹的高度
    for (int i = 0; i < n; i++)
    {
        // 累加下落距离
        total_distance += height;
        // 更新弹起高度
        bounce_height = height / 2.0;
        // 累加弹起距离
        total_distance += bounce_height;
        // 更新下一次下落的高度
        height = bounce_height;
    }

    // 输出结果，保留一位小数
    printf("Total distance traveled: %.1f meters\n", total_distance);
    printf("Height of the ball after the %dth bounce: %.1f meters\n", n, bounce_height);

    return 0;
}
