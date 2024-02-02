/**
* @author yklsfzy
* @date 2024/2/2/0002 15:25:43
*/
#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "是闰年" << endl;
    } else {
        cout << "不是闰年" << endl;
    }
    return 0;
}