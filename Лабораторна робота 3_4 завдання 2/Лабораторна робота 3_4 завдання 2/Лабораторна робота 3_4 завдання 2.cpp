#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = -4, b = 2;
    int k;
    cout << "Введіть k: ";
    cin >> k;

    double h = (b - a) / k;
    int i = 0;

    while (i <= k) {
        double x = a + i * h;
        double y = exp(3 * x * x + fabs(x + 2));
        cout << "x = " << x << "\t y = " << y << endl;
        i++;
    }

    return 0;
}