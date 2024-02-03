/**
* @author yklsfzy
* @date 2024/2/3/0003 10:51:03
*/
#include <iostream>

using namespace std;

int main() {
    int n1, n2, gcd;
    cout << "请输入两个整数：" << endl;
    cin >> n1 >> n2;
    for (int i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    cout << "最大公约数为：" << gcd << endl;
    return 0;
}