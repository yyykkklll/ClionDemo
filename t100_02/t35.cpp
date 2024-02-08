/**
* @author yklsfzy
* @date 2024/2/8/0008 20:46:26
*/
#include <iostream>

using namespace std;

void reverse(char *str) {
    int len = 0;
    char *p = str;
    // 计算字符串长度
    while (*p) {
        len++;
        p++;
    }
    int i = 0;
    char c;
    while (i < len / 2 - 1) {
        c = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = c;
        i++;
    }
}

int main() {
    char str[] = "hello world";
    reverse(str);
    cout << str << endl;
    return 0;
}