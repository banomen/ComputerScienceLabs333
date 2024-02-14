//
// Created by Omen on 14.02.2024.
//
#include <iostream>

int main() {
    float x,y,z;

    std::cout << "Insert x" << std::endl;
    std::cin >> x;

    std::cout << "Insert y" << std::endl;
    std::cin >> y;

    std::cout << "Insert z" << std::endl;
    std::cin >> z;

    //Пишите формулу своего варианта
    double result = (x + y * z) - 3.14159 * (x + y + z / x);

    std::cout << "Result: " << result << std::endl;
}