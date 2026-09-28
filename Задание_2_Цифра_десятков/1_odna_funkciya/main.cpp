// Задание: дано неотрицательное целое число, найти цифру десятков
// (вторую справа цифру в его десятичной записи).
// Способ 1: всё решение в одной функции main().

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Vvedite neotricatelnoe celoe chislo: ";
    cin >> n;

    int tens = (n / 10) % 10;

    cout << "Cifra desyatkov: " << tens << endl;
    return 0;
}
