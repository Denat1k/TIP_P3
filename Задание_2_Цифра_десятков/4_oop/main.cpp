// Задание: дано неотрицательное целое число, найти цифру десятков.
// Способ 4: ООП — класс NumberInfo хранит число и умеет находить его цифру десятков.
// Собрать: g++ main.cpp NumberInfo.cpp -o task2

#include <iostream>
#include "NumberInfo.h"
using namespace std;

int main() {
    int n;
    cout << "Vvedite neotricatelnoe celoe chislo: ";
    cin >> n;

    NumberInfo info(n);

    cout << "Cifra desyatkov: " << info.getTensDigit() << endl;
    return 0;
}
