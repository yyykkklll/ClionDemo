/**
* @author yklsfzy
* @date 2024/2/2/0002 15:09:35
*/
#include <stdio.h>

int main() {
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    scanf("%c", &c);
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}