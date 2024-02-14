//
// Created by Omen on 14.02.2024.
//
#include <iostream>
#include <cmath>

int main() {
    double sqrtOfTwo = sqrt(2), previousValue = 0, pi = (2 / sqrtOfTwo);

    while (fabs(pi - previousValue) > 0 ) {
        previousValue = pi;
        sqrtOfTwo = sqrt(sqrtOfTwo + 2);
        pi = pi * 2 / sqrtOfTwo;
    }

    std::cout << "Pi = " << pi * 2;
}