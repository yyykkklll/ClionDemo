/**
* @author yklsfzy
* @date 2024/2/4/0004 12:52:52
*/
#include <iostream>

using namespace std;

int main() {
    long long n;
    int count = 0;
    cin >> n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    cout << "����" << count << "λ��" << endl;
    return 0;
}