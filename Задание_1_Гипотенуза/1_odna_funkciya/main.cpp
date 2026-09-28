// Задание: даны два катета a и b, найти гипотенузу треугольника.
// Способ 1: всё решение в одной функции main().

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Vvedite katety a i b: ";
    cin >> a >> b;

    double c = sqrt(a * a + b * b);

    cout << "Gipotenuza c = " << c << endl;
    return 0;
}
