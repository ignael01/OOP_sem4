#include <iostream>
#include <cmath>
#include <math.h> 



//���������� ��������� ����������� n- ��������� �������� ���������� r �������� 
double calculatePerimeter(int n, double r) {
    // �������� �� ������������ ����� ������
    if (n < 3) {
        std::cerr << "����� ������ ������ ���� �� ����� 3." << std::endl;
        return 0;
    }
    const  double M_PI = 3.14;
    // ���������� ����� �������
    double sideLength = 2 * r * sin(M_PI / n);

    // ���������� ���������
    double perimeter = n * sideLength;
    return perimeter;
}