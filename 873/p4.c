/**
 * @author yklsfzy
 * @date 2024/2/23/0023 17:35:10
 */
#include <stdio.h>

// ��������
int findGCD(int a, int b);

int findLCM(int a, int b);

int main()
{
    // ������������
    int num1, num2;
    printf("������������??");
    scanf("%d %d", &num1, &num2);

    // �������Լ������??
    int gcd = findGCD(num1, num2);
    printf("���Լ��??%d\n", gcd);

    // ������С����������??
    int lcm = findLCM(num1, num2);
    printf("��С������??%d\n", lcm);

    return 0;
}

// �������壺�����Լ��
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �������壺����С������
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}
