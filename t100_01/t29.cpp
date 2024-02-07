/**
* @author yklsfzy
* @date 2024/2/4/0004 13:03:01
*/
#include <iostream>

using namespace std;


int main() {
    int base, exponent;
    int result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    while (exponent != 0) {
        result *= base;
        exponent--;
    }
    cout << "The result is: " << result << endl;
    return 0;
}
