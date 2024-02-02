//
// Created by yklsfzy on 2023/12/30/0030.
//
#include <iostream>

using namespace std;

int main() {
    for (int n = 100; n < 200; n++) {
        if (n % 3 == 0)
            continue;
        else
            cout << n << endl;
    }
}