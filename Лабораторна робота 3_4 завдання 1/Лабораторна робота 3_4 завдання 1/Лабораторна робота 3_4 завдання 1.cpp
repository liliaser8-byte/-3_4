#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    for (int i = 11; i <= 99; i += 2) {
        sum += i;
    }

    cout << "Сума всіх двозначних непарних чисел = " << sum << endl;
    return 0;
}