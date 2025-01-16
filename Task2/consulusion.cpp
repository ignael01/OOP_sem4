// Вывод последовательности b1, b2, ..., bn
#include <iostream>


//создает массив из n- элиментов 
int* fill_array(int n) {
    //создаеться динамический массив из n элементов типа int
    int* Square = new int[n];
    //заполняеться массив
    // создаеться переменая типа int  у которой есть условия выхода из цикла i<n выполняеться тело цикла и инткремируеться 
    for (int i = 0; i < n; ++i) {
        Square[i] = i+1;
        //std::cout << Square[i];
    }

    return Square;
}


//Вывод массива Mass c размером n на экран 
int* print_array(int* Mass, int n) {
    for (int i = 0; i < n; i++) std::cout << Mass[i] << " ";
    return 0;
}