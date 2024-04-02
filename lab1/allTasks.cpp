//
// Created by Omen on 02.04.2024.
//
#include <iostream>
using namespace std;

void task1() {
    cout << "Ivanov" << endl;
    cout << "Ivan" << endl;
    cout << "Ivanych" << endl << endl;
}

void task2() {
    int day = 1;
    int month = 1;
    int year = 1990;


    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl << endl;
}

void task3() {
    float x,y,z;

    cout << "Insert x" << endl;
    cin >> x;

    cout << "Insert y" << endl;
    cin >> y;

    cout << "Insert z" << endl;
    cin >> z;

    //Пишите формулу своего варианта
    double result = (x + y * z) - 3.14159 * (x + y + z / x);

    cout << "Result: " << result << endl << endl;
}

int main() {
    int choice;

    while (1) {
        cout << "1 - task1 \n2 - task2 \n3 - task3" << endl << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
        }
    }
}