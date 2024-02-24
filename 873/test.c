#include <stdio.h>

int main() {
    char str[1000];
    printf("please input the string:\n");
    gets(str);
    int i = 0;
    int count = 0, num = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            if (num > 0) {
                count++;
                num = 0;
            }
        }
        i++;
    }
    if (num > 0) {
        count++;
        num = 0;
    }
    printf("%d", count);
    return 0;
}
