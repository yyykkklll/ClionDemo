/**
* @author yklsfzy
* @date 2024/2/2/0002 15:30:40
*/
#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c > 'a' && c <= 'z')
        cout << "Сд��ĸ" << endl;
    else if (c > 'A' && c <= 'Z')
        cout << "��д��ĸ" << endl;
    else
        cout << "������ĸ" << endl;
    return 0;
}