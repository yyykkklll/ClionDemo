/**
* @author yklsfzy
* @date 2024/2/3/0003 10:37:45
*/
#include <iostream>

using namespace std;

int main() {
    int num, count = 0;
    cout << "请输入一个整数：";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        count += i;
    }
    cout << count;
    return 0;
}