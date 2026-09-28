// Задание: даны два катета a и b, найти гипотенузу треугольника.
// Способ 4: ООП — класс Triangle хранит катеты и умеет считать гипотенузу.
// Собрать: g++ main.cpp Triangle.cpp -o task1

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    double a, b;
    cout << "Vvedite katety a i b: ";
    cin >> a >> b;

    Triangle triangle(a, b);

    cout << "Gipotenuza c = " << triangle.getHypotenuse() << endl;
    return 0;
}
