/**
* @author yklsfzy
* @date 2024/2/4/0004 13:11:52
*/
#include <iostream>

using namespace std;

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;
    cin >> number;
    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;
    return 0;
}