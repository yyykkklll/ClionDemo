#include <iostream>
using namespace std;
int main()
{
    int a, x, b, y;
    cin >> x >> a >> y >> b;
    printf("%.2f", double(b * y - a * x) / (b - a));
    // %.2f ռλ��ʹ���������λС��
    return 0;
}