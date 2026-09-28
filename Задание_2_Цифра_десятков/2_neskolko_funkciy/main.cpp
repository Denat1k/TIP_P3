// Задание: дано неотрицательное целое число, найти цифру десятков.
// Способ 2: решение разбито на отдельные функции внутри одного файла.

#include <iostream>
using namespace std;

int readNumber() {
    int n;
    cout << "Vvedite neotricatelnoe celoe chislo: ";
    cin >> n;
    return n;
}

int tensDigit(int n) {
    return (n / 10) % 10;
}

void printResult(int digit) {
    cout << "Cifra desyatkov: " << digit << endl;
}

int main() {
    int n = readNumber();

    int digit = tensDigit(n);

    printResult(digit);
    return 0;
}
