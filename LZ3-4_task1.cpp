#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ n: ";
    cin >> n;

    double sum = 0.0;
    double fact = 1.0; // ��������� �������� ��������� (0! = 1)

    for (int k = 1; k <= n; k++) {
        fact *= k;           // k! = (k-1)! * k
        sum += 1.0 / fact;   // ������ 1/k!
    }

    cout << "���� = " << sum << endl;

    return 0;
}
