#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "hello";
    char *t = (char *)malloc(strlen(s) + 1); // 为 t 分配足够的空间
    if (t == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    char *temp = t; // 保存 t 的初始位置

    while (*t++ = *s++) // 复制字符串 s 到字符串 t
        ;
    *t = '\0'; // 在 t 的末尾添加字符串结束符 '\0'

    printf("%s\n", temp); // 打印复制后的字符串

    free(temp); // 释放动态分配的内存
    return 0;
}
