#include "TriangleClass.h"
#include <iostream>
#include <fstream>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert

// Выводит поля объекта класса Triangle 
void printObj(Triangle* obj) {
	std::cout << "Triangle" << '\n';
	std::cout << "Side A: " << obj->getSideA() << '\n';
	std::cout << "Side B: " << obj->getSideB() << '\n';
	std::cout << "Side C: " << obj->getSideC() << '\n';
	std::cout << "Perimeter: " << obj->getPerimeter() << '\n';
	std::cout << "Area: " << obj->getArea() << '\n';
}

int main() {
	///Указатель на объект : Triangle * test_ptr; объявляет указатель на объект класса Triangle.В данный момент он не указывает ни на какой объект.
	//хронит адресс обьекта
	Triangle* test_ptr;
	//Экземпляр класса : Triangle tri; создает экземпляр класса Triangle с именем tri. Обьект 
	Triangle tri;
	//Присваивание адреса : test_ptr = &tri; присваивает указателю test_ptr адрес объекта tri.Теперь test_ptr указывает на существующий объект tri, и вы можете использовать его для доступа к членам класса через указатель.
	test_ptr = &tri;
	float i;
	assert(checkSettersSeparate(test_ptr));
	assert(checkSettersGeneral(test_ptr));


	Triangle* tri_obj = new Triangle(1.5, 2.5, 3.5); // указатель на динамический объект с дефолтными значениями для одиночного вывода
	// tri_obj - указатель на обьект
	printObj(tri_obj);
	std::cout << '\n';

	int arr_size = 3; // Размер массивов далее

	//указатель tri_arr1 и тело обьекта Triangle  динамисечкий массив
	Triangle* tri_arr1 = new Triangle[ arr_size ]; // указатель на Массив для чтения из файла
	// tri_arr - указатель на массив
	Triangle* tri_arr2 = new Triangle[ arr_size ]; // Массив для записи
	
	// создал обьект со статическим массивом 
	Triangle tri_arr3[3];

	std::cout << "tri_arr1 ref content:" << '\n'; // Вывод объектов первого массива (нужно чтобы увидеть изменения после чтения из файла)
	for ( int i = 0; i < arr_size; ++i ) {
		printObj(&tri_arr1[ i ]);
		std::cout << '\n';
	}


	return 0;

}

