//
// Created by Omen on 14.02.2024.
//
#include <iostream>

int main() {
    int x,y,z;
    bool A,B,C;

    std::cout << "Insert x" << std::endl;
    std::cin >> x;

    std::cout << "Insert y" << std::endl;
    std::cin >> y;

    std::cout << "Insert z" << std::endl;
    std::cin >> z;

    // пишите условия своего варианта
    if (x > 0) { A = true; }
    if (y >= 0) { B = true; }
    if (z == 0) { C = true; }

    // пишите функцию своего варианта
    bool result = (A and (!B or !C));

    std::cout << "Result: " << (result ? "Statement is true" : "Statement is false") << std::endl;
}