/**
* @author yklsfzy
* @date 2024/2/8/0008 20:56:53
*/
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include<cstdio>
#include<cmath>

int main() {
    int i, j, k, n = 0;
    for (i = 2; i <= 100; i++) {
        k = (int) sqrt(i);
        for (j = 2; j <= k; j++)
            if (i % j == 0) break;
        if (j > k) {
            printf("%d ", i);
            n++;
            if (n % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}