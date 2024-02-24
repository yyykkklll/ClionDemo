#include <stdio.h>

int main() {
    char ch;
    FILE *fp = fopen("io_01.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    // 鸿蒙字体
    ch = (char) getchar();
    // input the character '#' ending this io
    while (ch != '#') {
        fputc(ch, fp);
        ch = (char) getchar();
    }
    fclose(fp);
    return 0;
}