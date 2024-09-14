// Lab_02.cpp
// Кулаковський Юрій
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double m;
    double n;
    double z1;
    double z2;

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    z1 = pow(cos(m) - cos(n), 2) - pow(sin(m) - sin(n), 2);
    z2 = -4 * pow(sin((m - n) / 2), 2) * cos(m + n);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();

    return 0;
}
