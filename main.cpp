#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    double length, width, height, volume;

    std::cout << "���������� ��'��� �������������" << std::endl;
    std::cout << "������  ���:" << std::endl;

    std::cout << "������� (��) -> ";
    std::cin >> length;

    std::cout << "������ (��) -> ";
    std::cin >> width;

    std::cout << "������ (��) -> ";
    std::cin >> height;

    
    volume = length * width * height;

    std::cout << "��'��: " << volume << " ���.��." << std::endl;

    return 0;
}