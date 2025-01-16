#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include "Shapes.h"

// конструктор фигуры с позицией  pos_x pos_y
Shape::Shape(float _pos_x, float _pos_y) {
	this->pos_x = _pos_x;
	this->pos_y = _pos_y;
}
// метод фигуры которая смещает на координы d_x и d_y
void Shape::move(float d_x, float d_y) {
	this->pos_x += d_x;
	this->pos_y += d_y;
	}
// метод периметр  возвращает 0.0
float Shape::perimeter() const { return 0.0; }

///площадь возвращает 0.0
float Shape::area() const { return 0.0; }

// конструктор квадрата проверяет длину >0
Square::Square(float _side) {
	if (_side > 0) {
		this->side = _side;
	}
	else
		std::cout << "Неверно задана длина стороны";
}
// метод периметра возвращает длина *4
float Square::perimeter() const { return this->side * 4; }
// метод периметра возвращает длина * длину
float Square::area() const { return this->side * side; }
//  метод сетера возвращает  проверяет длину >0
void Square::setSide(float _side) {

	if (_side > 0) {
		this->side = _side;
	}
	else
		std::cout << "Неверно задана длина стороны";
}
//  метод гетера длины выводит длину
float Square::getSide() { return this->side; }

// конструктор специальный метод для инициализаяции обьекта совпадает с именем класса
Circle::Circle(float _radius) {
	if (_radius > 0) {
		this->radius = _radius;
	}
	else
		std::cout << "Неверно задан радиус";
}
//метод периметр окружности вывод 2*ПИ * радиус
float Circle::perimeter() const { return 2 * M_PI * this->radius; }
// метод площадь окружности вывод ПИ*радиус^^2
float Circle::area() const { return M_PI * this->radius * this->radius; }
  // сетер окружности радиуса
void Circle::setRadius(float _radius) {
	if (_radius > 0) {
		this->radius = _radius;
	}
	else
		std::cout << "Неверно задан радиус";
}
// circle имя класса  getRadius его метод
float Circle::getRadius() { return this->radius; }