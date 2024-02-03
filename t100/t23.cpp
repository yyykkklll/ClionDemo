/**
* @author yklsfzy
* @date 2024/2/3/0003 10:47:03
*/
#include <iostream>

using namespace std;

int fabocci(int n) {
    int a = 0, b = 1, c;
    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return b;
    }
    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    cout << fabocci(10);
    return 0;
}