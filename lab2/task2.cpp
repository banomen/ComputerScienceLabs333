//
// Created by Omen on 14.02.2024.
//
#include <iostream>

int main() {
    char operation;
    float x,y;

    std::cout << "Insert x" << std::endl;
    std::cin >> x;

    std::cout << "Insert y" << std::endl;
    std::cin >> y;

    std::cout << "Insert operation sign (+,-,*,/)" << std::endl;
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "Result: " << y + x << std::endl;
            break;
        case '-':
            std::cout << "Result: " << y - x << std::endl;
            break;
        case '*':
            std::cout << "Result: " << y * x << std::endl;
            break;
        case '/':
            std::cout << "Result: " << y / x << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
    }
}