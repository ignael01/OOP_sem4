#include <iostream>
#include <cmath>
#include <math.h> 



//вычисление периметра правильного n- угольника описанго окружности r радиусом 
double calculatePerimeter(int n, double r) {
    // Проверка на корректность числа сторон
    if (n < 3) {
        std::cerr << "Число сторон должно быть не менее 3." << std::endl;
        return 0;
    }
    const  double M_PI = 3.14;
    // Вычисление длины стороны
    double sideLength = 2 * r * sin(M_PI / n);
    
    // Вычисление периметра
    double perimeter = n * sideLength;
    return perimeter;
}

