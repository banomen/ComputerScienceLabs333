//
// Created by Omen on 28.02.2024.
//
#include <iostream>
#include <iomanip>

void task1() {
    const int MAX = 10;
    float array[MAX];
    float averageValue = 0;

    for (int count = 0; count < MAX; count++) {
        std::cout << "Enter " << count + 1 << " element of arrray" << std::endl;
        std::cin >> array[count];
    }

    for (int i = 0; i < MAX; i++) {
        averageValue += array[i];
    }

    std::cout << "Average value of array is: " << averageValue / (float) MAX << std::endl << std::endl;
}

void task2() {
    const int MAX = 10;
    float array[MAX];
    float maxValue = 0;

    for (int count = 0; count < MAX; count++) {
        std::cout << "Enter " << count + 1 << " element of arrray" << std::endl;
        std::cin >> array[count];
    }

    for (int i = 0; i < MAX; i++) {
        if (maxValue < array[i])
            maxValue = array[i];
    }

    std::cout << "Max value of array is: " << maxValue << std::endl << std::endl;
}

void task3() {
    const int MAX = 80;
    int count = 0;
    char charToFind;
    char str[MAX];

    std::cout << "Enter a string: ";
    std::cin >> std::setw(MAX) >> str;

    std::cout << "Enter a char to charToFind: ";
    std::cin >> charToFind;

    for (char i : str) {
        if (charToFind == i) {
            count++;
        }
    }

    std::cout << "Char " << charToFind << " repeats: " << count << " times" << std::endl << std::endl;
}

int main() {
    int choice;

    while (1) {
        std::cout << "1 - Average value of array"
                     "\n2 - Max value of array"
                     "\n3 - Repeats of char in array"
                  << std::endl;
        std::cin >> choice;

        switch (choice) {
            default:
                std::cout << "Invalid task number" << std::endl << std::endl;
                break;
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
        }
    }
}