/**
* @author yklsfzy
* @date 2024/2/3/0003 10:41:21
*/
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d =%2d  ", i, j, i * j);
        }
        cout << endl;
    }
    return 0;
}