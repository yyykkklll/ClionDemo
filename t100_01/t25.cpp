/**
* @author yklsfzy
* @date 2024/2/3/0003 10:56:34
*/
#include <iostream>

using namespace std;

int main() {
    int n1, n2, minMultiple;
    cout << "����������������";
    cin >> n1 >> n2;
    minMultiple = (n1 > n2) ? n1 : n2;
    while (1) {
        if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
            printf("%d��%d��%d����С������\n", minMultiple, n1, n2);
            break;
        }
        minMultiple++;
    }
    return 0;
}