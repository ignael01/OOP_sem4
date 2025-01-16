#include <iostream>
#include "trianglecalc.h"
#include <cmath>

#define NDEBUG
#include <cassert> // для assert

int main() {
    setlocale(LC_ALL, "Russian");
    //проверка на наличие коректности работы
    assert( abs( calculatePerimeter(4, 1) ) == 0.000001);   // хороший вариант
    assert(2 == 42);

    //обьявление переменных
    int n;
    double r;
    
    // Ввод данных
    std::cout << "Введите число сторон n: ";
    std::cin >> n;
    std::cout << "Введите радиус окружности r: ";
    std::cin >> r;

    // Вычисление периметра
    double perimeter = calculatePerimeter(n, r);
    
    // Вывод результата
    std::cout << "Периметр правильного " << n << "-угольника: " << perimeter << std::endl;

    return 0;
}