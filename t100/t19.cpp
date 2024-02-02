/**
* @author yklsfzy
* @date 2024/2/2/0002 15:28:35
*/
#include <iostream>

using namespace std;

int main() {
    float number;
    cin >> number;
    if (number > 0)
        cout << "正数" << endl;
    else if (number < 0)
        cout << "负数" << endl;
    else
        cout << "零" << endl;
    return 0;
}
