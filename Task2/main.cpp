#include "consulusion.h"
#include "proverca.h"
#include <iostream>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert


int main() {
    int n;
    setlocale(LC_ALL, "Russian");


    // Ввод натурального числа n
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (proverca(n) == 0) {
        int* Mass = fill_array(n);  //нужно здесь сохранить значения массива из функции mass(n)


        print_array(Mass,n);
    };

    

   
    std::cout << std::endl; // Переход на новую строку после вывода последовательности

    return 0; // Успешное завершение программы
}
