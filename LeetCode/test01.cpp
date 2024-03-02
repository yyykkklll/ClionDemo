/**
* @author yklsfzy
* @date 2024/2/27/0027 22:22:49
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);

    auto b = v.begin();
    auto e = v.end();
    for (auto it = b; it != e; ++it) {
        cout << *it << endl;
    }
    return 0;
}

