/**
* @author yklsfzy
* @date 2024/2/4/0004 12:42:26
*/
#include <iostream>

using namespace std;

int factorial(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++)
        fac *= i;
    return fac;
}

int main() {
    int res = factorial(10);
    cout << "the result:" << res;
    return 0;
}


