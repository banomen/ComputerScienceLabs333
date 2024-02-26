//
// Created by Omen on 14.02.2024.
//
#include <iostream>
#include <cmath>

int main() {
    double pi = 1;
    int n = 1000000;

    for (int i = 1; i <= n; i++) {
        pi = pi * pow(2 * i,2) / ((2.0 * i - 1)*(2.0 * i + 1));
    }

    std::cout << "Pi value: " << pi * 2;
}