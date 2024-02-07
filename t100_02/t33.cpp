/**
* @author yklsfzy
* @date 2024/2/7/0007 13:54:13
*/
#include <iostream>

using namespace std;

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i = isPrime(3);
    cout << i << endl;
    return 0;
}