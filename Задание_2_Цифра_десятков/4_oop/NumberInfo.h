// Заголовочный файл класса NumberInfo (разбор цифр числа).
#ifndef NUMBERINFO_H
#define NUMBERINFO_H

class NumberInfo {
private:
    int number;

public:
    NumberInfo(int number);
    int getTensDigit() const;
};

#endif
