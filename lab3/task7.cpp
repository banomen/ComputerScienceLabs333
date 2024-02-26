//
// Created by Omen on 14.02.2024.
//
#include <iostream>
#include <cmath>

int main() {
    double pi = 0;

    for (int i = 0; i < 1000000; i++) {
        pi = pi + 4.0 * pow(-1, i) / (2.0 * i + 1.0);
    }

    std::cout << "Pi value: " << pi;
}