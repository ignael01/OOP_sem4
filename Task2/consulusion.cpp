// ����� ������������������ b1, b2, ..., bn
#include <iostream>


//������� ������ �� n- ��������� 
int* fill_array(int n) {
    //���������� ������������ ������ �� n ��������� ���� int
    int* Square = new int[n];
    //������������ ������
    // ���������� ��������� ���� int  � ������� ���� ������� ������ �� ����� i<n ������������ ���� ����� � ��������������� 
    for (int i = 0; i < n; ++i) {
        Square[i] = i+1;
        //std::cout << Square[i];
    }

    return Square;
}


//����� ������� Mass c �������� n �� ����� 
int* print_array(int* Mass, int n) {
    for (int i = 0; i < n; i++) std::cout << Mass[i] << " ";
    return 0;
}