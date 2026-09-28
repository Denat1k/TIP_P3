// Задание: даны два катета a и b, найти гипотенузу треугольника.
// Способ 3: решение разбито на отдельные файлы (hypotenuse.h / hypotenuse.cpp / main.cpp).
// Собрать: g++ main.cpp hypotenuse.cpp -o task1

#include <iostream>
#include "hypotenuse.h"
using namespace std;

int main() {
    double a, b;
    cout << "Vvedite katety a i b: ";
    cin >> a >> b;

    double c = hypotenuse(a, b);

    cout << "Gipotenuza c = " << c << endl;
    return 0;
}
