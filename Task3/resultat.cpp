#include "resultat.h"
#include "math.h"


// ��������� �������� ������
double trianglePerimeter(float sideA, float sideB, float sideC) {
    return( sideA+ sideB+ sideC );
};
// ��������� ������� ������
double triangleArea(float sideA, float sideB, float sideC) {
    double p = ( sideA + sideB + sideC ) / 2;
    return( sqrt(p*(p - sideA)*( p - sideB )*( p - sideC ) ) );
};