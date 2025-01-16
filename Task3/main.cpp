#include "TriangleClass.h"
#include <iostream>
#include <fstream>

// ����������������� ������ ����, ����� ��������� assert()
// #define NDEBUG
#include <cassert> // ��� assert

// ������� ���� ������� ������ Triangle 
void printObj(Triangle* obj) {
	std::cout << "Triangle" << '\n';
	std::cout << "Side A: " << obj->getSideA() << '\n';
	std::cout << "Side B: " << obj->getSideB() << '\n';
	std::cout << "Side C: " << obj->getSideC() << '\n';
	std::cout << "Perimeter: " << obj->getPerimeter() << '\n';
	std::cout << "Area: " << obj->getArea() << '\n';
}

int main() {
	///��������� �� ������ : Triangle * test_ptr; ��������� ��������� �� ������ ������ Triangle.� ������ ������ �� �� ��������� �� �� ����� ������.
	//������ ������ �������
	Triangle* test_ptr;
	//��������� ������ : Triangle tri; ������� ��������� ������ Triangle � ������ tri. ������ 
	Triangle tri;
	//������������ ������ : test_ptr = &tri; ����������� ��������� test_ptr ����� ������� tri.������ test_ptr ��������� �� ������������ ������ tri, � �� ������ ������������ ��� ��� ������� � ������ ������ ����� ���������.
	test_ptr = &tri;
	float i;
	assert(checkSettersSeparate(test_ptr));
	assert(checkSettersGeneral(test_ptr));


	Triangle* tri_obj = new Triangle(1.5, 2.5, 3.5); // ��������� �� ������������ ������ � ���������� ���������� ��� ���������� ������
	// tri_obj - ��������� �� ������
	printObj(tri_obj);
	std::cout << '\n';

	int arr_size = 3; // ������ �������� �����

	//��������� tri_arr1 � ���� ������� Triangle  ������������ ������
	Triangle* tri_arr1 = new Triangle[ arr_size ]; // ��������� �� ������ ��� ������ �� �����
	// tri_arr - ��������� �� ������
	Triangle* tri_arr2 = new Triangle[ arr_size ]; // ������ ��� ������
	
	// ������ ������ �� ����������� �������� 
	Triangle tri_arr3[3];

	std::cout << "tri_arr1 ref content:" << '\n'; // ����� �������� ������� ������� (����� ����� ������� ��������� ����� ������ �� �����)
	for ( int i = 0; i < arr_size; ++i ) {
		printObj(&tri_arr1[ i ]);
		std::cout << '\n';
	}


	return 0;

}

