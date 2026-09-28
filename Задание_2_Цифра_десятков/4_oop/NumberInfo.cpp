// Реализация класса NumberInfo.
#include "NumberInfo.h"

NumberInfo::NumberInfo(int number) : number(number) {}

int NumberInfo::getTensDigit() const {
    return (number / 10) % 10;
}
