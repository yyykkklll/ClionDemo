/**
* @author yklsfzy
* @date 2024/2/6/0006 10:55:50
*/
#include <iostream>

using namespace std;

int main() {
    char arr[] = "";
    cout << "please input a string(arr):" << endl;
    cin >> arr;
    cout << "please input a flag character(flag):" << endl;
    char flag;
    cin >> flag;
    for (int i = 0; i < sizeof(arr) / arr[0]; ++i) {
        if (arr[i] == flag) {
            arr[i] = arr[i + 1];
        }
    }
    cout << arr << endl;
    return 0;
}