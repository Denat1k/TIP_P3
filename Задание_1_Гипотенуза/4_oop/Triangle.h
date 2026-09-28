// Заголовочный файл класса Triangle (прямоугольный треугольник по двум катетам).
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double a, b; // катеты

public:
    Triangle(double a, double b);
    double getHypotenuse() const;
};

#endif
