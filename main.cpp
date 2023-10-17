#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    double length, width, height, volume;

    std::cout << "Обчислення об'єму паралелепіпеда" << std::endl;
    std::cout << "Введіть  дані:" << std::endl;

    std::cout << "Довжина (см) -> ";
    std::cin >> length;

    std::cout << "Ширина (см) -> ";
    std::cin >> width;

    std::cout << "Висота (см) -> ";
    std::cin >> height;

    
    volume = length * width * height;

    std::cout << "Об'єм: " << volume << " куб.см." << std::endl;

    return 0;
}