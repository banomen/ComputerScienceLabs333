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
    do
    {
        std::cout << double (pow(3,i)) << std::endl;
        i++;
    }
    while(i <= 9);

    //Четные/нечетные числа
    do
    {
        std::cout << i << std::endl;
        i += 2;
    }
    while(i <= 23);
}