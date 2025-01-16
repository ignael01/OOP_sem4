#include "resultat.h"
#include "math.h"


// вычисляем периметр фигуры
double trianglePerimeter(float sideA, float sideB, float sideC) {
    return( sideA+ sideB+ sideC );
};
// вычисляем площадь фигуры
double triangleArea(float sideA, float sideB, float sideC) {
    double p = ( sideA + sideB + sideC ) / 2;
    return( sqrt(p*(p - sideA)*( p - sideB )*( p - sideC ) ) );
};