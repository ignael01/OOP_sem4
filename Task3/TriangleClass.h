#pragma once
#include <iostream>

/// @brief Класс треугольник. Имеет поля sideA, sideB, sideC - длины сторон треугольника,
/// @brief perimeter - периметр треугольника, area - площадь треугольника.
/// triangle тип данных 
/// поле класса переменая обьявленая внутри класса 
/// метод функция обьявленая внутри класса 
class Triangle {
private:

	// Стороны треугольника
	// поля класса 
	float sideA;
	float sideB;
	float sideC;

	// Периметр и площадь треугольника
	//float perimeter;
	//float area;

	//void setPerimeter(float _sideA, float _sideB, float _sideC); // Сеттер периметра

	//void setArea(float _sideA, float _sideB, float _sideC); // Сеттер площади

public:

	// Конструктор инициализируется значениями по умолчанию, если не задано иное
	//обьявляем методы 
	Triangle(float _sideA = 1.0, float _sideB = 1.0, float _sideC = 1.0);

	// Метод проверки треугольника
	bool isValid(float _sideA, float _sideB, float _sideC);

	//void updateFields();


	///Геттер  получает данные о чём-то внутри объекта и передаёт их наружу. 
	///Сеттер меняет значения внутри объекта.
	/// 
	// Сеттеры сторон треугольника
	void setSides(float _sideA, float _sideB, float _sideC);
	void setSideA(float _sideA);
	void setSideB(float _sideB);
	void setSideC(float _sideC);

	// Геттеры сторон треугольника
	float getSideA() const;
	float getSideB() const;
	float getSideC() const;

	// Геттеры периметра и площади
	float getPerimeter() const;
	float getArea() const;

};

bool checkSettersSeparate(Triangle* test_obj);
bool checkSettersGeneral(Triangle* test_obj);