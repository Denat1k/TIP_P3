// Задание: даны два катета a и b, найти гипотенузу треугольника.
// Способ 2: решение разбито на отдельные функции внутри одного файла.

#include <iostream>
#include <cmath>
using namespace std;

void inputLegs(double &a, double &b) {
    cout << "Vvedite katety a i b: ";
    cin >> a >> b;
}

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

void printResult(double c) {
    cout << "Gipotenuza c = " << c << endl;
}

int main() {
    double a, b;
    inputLegs(a, b);

    double c = hypotenuse(a, b);

    printResult(c);
    return 0;
}
