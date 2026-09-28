// Задание: дано неотрицательное целое число, найти цифру десятков.
// Способ 3: решение разбито на отдельные файлы (tens.h / tens.cpp / main.cpp).
// Собрать: g++ main.cpp tens.cpp -o task2

#include <iostream>
#include "tens.h"
using namespace std;

int main() {
    int n;
    cout << "Vvedite neotricatelnoe celoe chislo: ";
    cin >> n;

    int digit = tensDigit(n);

    cout << "Cifra desyatkov: " << digit << endl;
    return 0;
}
