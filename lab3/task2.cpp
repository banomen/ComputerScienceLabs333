//
// Created by Omen on 14.02.2024.
//
#include <iostream>
#include <cmath>

int main() {
    int i = 1;

    //
    //Выбираете 1 в зависимости от того, что у вас в варианте
    //

    //число в степени
    while (i <= 9) {
        std::cout << double (pow(3,i)) << std::endl;
        i++;
    }

    //Четные/нечетные числа
    while (i <= 23) {
        std::cout << i << std::endl;
        i += 2;
    }
}