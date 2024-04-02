//
// Created by Omen on 02.04.2024.
//
//
// Created by Omen on 02.04.2024.
//
#include <iostream>
using namespace std;

void task1() {
    float x;

    cout << "Insert x" << endl;
    cin >> x;

    (x - (int) x == 0) ? cout << "x is int" << endl : cout << "x is float" << endl << endl;
}

void task2() {
    char operation;
    float x,y;

    cout << "Insert x" << endl;
    cin >> x;

    cout << "Insert y" << endl;
    cin >> y;

    cout << "Insert operation sign (+,-,*,/)" << endl;
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << y + x << endl << endl;
            break;
        case '-':
            cout << "Result: " << y - x << endl << endl;
            break;
        case '*':
            cout << "Result: " << y * x << endl << endl;
            break;
        case '/':
            cout << "Result: " << y / x << endl << endl;
            break;
        default:
            cout << "Invalid operation" << endl << endl;
    }
}

void task3() {
    int x,y,z;
    bool A,B,C;

    cout << "Insert x" << endl;
    cin >> x;

    cout << "Insert y" << endl;
    cin >> y;

    cout << "Insert z" << endl;
    cin >> z;

    // пишите условия своего варианта
    if (x > 0) { A = true; }
    if (y >= 0) { B = true; }
    if (z == 0) { C = true; }

    // пишите функцию своего варианта
    bool result = (A and (!B or !C));

    cout << "Result: " << (result ? "Statement is true" : "Statement is false") << endl << endl;
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