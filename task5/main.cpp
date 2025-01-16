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
	Triangle* test_ptr;
	Triangle tri;
	test_ptr = &tri;

	assert(checkSettersSeparate(test_ptr));
	assert(checkSettersGeneral(test_ptr));

	Triangle* tri_obj = new Triangle(1.5, 2.5, 3.5); // ��������� �� ������������ ������ � ���������� ���������� ��� ���������� ������
	// tri_obj - ��������� �� ������
	printObj(tri_obj);
	std::cout << '\n';

	int arr_size = 3; // ������ �������� �����

	Triangle* tri_arr1 = new Triangle[arr_size]; // ��������� �� ������ ��� ������ �� �����
	// tri_arr - ��������� �� ������
	Triangle* tri_arr2 = new Triangle[arr_size]; // ������ ��� ������

	std::cout << "tri_arr1 ref content:" << '\n'; // ����� �������� ������� ������� (����� ����� ������� ��������� ����� ������ �� �����)
	for (int i = 0; i < arr_size; ++i) {
		printObj(&tri_arr1[i]);
		std::cout << '\n';
	}

	std::ofstream file_obj; // �������� ������ �� �����
	file_obj.open("1.txt", std::ios::app); // ������� 1.txt � ������ append. ����� ���������� ��������� �������

	// ���� ������ � ����
	for (int i = 0; i < arr_size; ++i) {
		tri_arr2[i].setSideA(1.5); // ������ ����� sideA � sideB ������ ��������, ����� ����� ������ ���� ����� ���������
		tri_arr2[i].setSideB(1.5);
		file_obj.write((char*)&tri_arr2[i], sizeof(tri_arr2[i])); // ���������� � ��������� ���� 
	}

	file_obj.close(); // ������� ����

	std::cout << "File 1.txt content:" << '\n';
	std::ifstream file_obj2; // �������� ������ �� ����
	file_obj2.open("1.txt", std::ios::in); // ������� 1.txt � ������ ������
	for (int i = 0; i < arr_size; ++i) {
		file_obj2.read((char*)&tri_arr1[i], sizeof(tri_arr1[i])); // �������� ����������� � ������ ������
		printObj(&tri_arr1[i]); // ������� �����������
		std::cout << '\n';
	}
	file_obj2.close(); // ������� ����
	return 0;

}