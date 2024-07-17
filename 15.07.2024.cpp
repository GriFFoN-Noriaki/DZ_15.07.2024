#include <iostream>

int main() 
{
    setlocale(LC_ALL, "rus");

    int a, b;

    // Ввод чисел
    std::cout << "Введите два числа через пробел: ";
    std::cin >> a >> b;

    // Вычисление целой части от деления первого числа на второе
    int divisionResult = a / b;
    std::cout << "Целая часть от деления числа " << a << " на " << b << ": " << divisionResult << std::endl;

    // Вычисление квадрата меньшего числа
    int minNumber = (a < b) ? a : b;
    int square = minNumber * minNumber;
    std::cout << "Квадрат меньшего из чисел: " << square << std::endl;

    // Вычисление куба большего числа
    int maxNumber = (a > b) ? a : b;
    int cube = maxNumber * maxNumber * maxNumber;
    std::cout << "Куб большего из чисел: " << cube << std::endl;

    return 0;
}