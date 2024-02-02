/**
 * @author yklsfzy
 * @date 2024/1/31/0031 22:58:12
 */

#include <stdio.h>

int main() {
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof 操作符用于计算变量的字节大小
    printf("Size of int: %llu bytes\n", sizeof(integerType));
    printf("Size of float: %llu bytes\n", sizeof(floatType));
    printf("Size of double: %llu bytes\n", sizeof(doubleType));
    printf("Size of char: %llu byte\n", sizeof(charType));

    return 0;
}