//
// Created by Omen on 14.02.2024.
//
#include <iostream>

int main() {
    float x;

    std::cout << "Insert x" << std::endl;
    std::cin >> x;

    (x - (int) x == 0) ? std::cout << "x is int" << std::endl : std::cout << "x is float" << std::endl;
}