//
// Created by Omen on 02.04.2024.
//
//
// Created by Omen on 02.04.2024.
//
#include <iostream>
#include <cmath>
using namespace std;

void task1() {
    //
    //Выбираете 1 в зависимости от того, что у вас в варианте
    //

    //число в степени
    for (int i = 1; i <= 9; i++) {cout << double (pow(3,i)) << endl;}

    //Четные/нечетные числа
    for (int i = 1; i <= 23; i += 2) {cout << i << endl;}
}

void task2() {
    int i = 1;

    //
    //Выбираете 1 в зависимости от того, что у вас в варианте
    //

    //число в степени
    while (i <= 9) {
        cout << double (pow(3,i)) << endl;
        i++;
    }

    //Четные/нечетные числа
    while (i <= 23) {
        cout << i << endl;
        i += 2;
    }
}

void task3() {
    int i = 1;

    //
    //Выбираете 1 в зависимости от того, что у вас в варианте
    //

    //число в степени
    do
    {
        cout << double (pow(3,i)) << endl;
        i++;
    }
    while(i <= 9);

    //Четные/нечетные числа
    do
    {
        cout << i << endl;
        i += 2;
    }
    while(i <= 23);
}

void task4() {
    int result = 0, members = 0, fib1 = 1, fib2 = 1;

    cout<<"Enter the number of members"<<endl;
    cin >> members;

    for (int i = 0; i < members; i++)
    {
        if (i == 0 || i == 1) {
            result = 1;
        } else {
            result = fib1 + result;
            fib1 = fib2;
            fib2 = result;
        }

        cout << result << endl;
    }
}

void task5() {
    double sqrtOfTwo = sqrt(2), previousValue = 0, pi = (2 / sqrtOfTwo);

    while (fabs(pi - previousValue) > 0 ) {
        previousValue = pi;
        sqrtOfTwo = sqrt(sqrtOfTwo + 2);
        pi = pi * 2 / sqrtOfTwo;
    }

    cout << "Pi = " << pi * 2;
}

void task6() {
    double pi = 1;
    int n = 1000000;

    for (int i = 1; i <= n; i++) {
        pi = pi * pow(2 * i,2) / ((2.0 * i - 1)*(2.0 * i + 1));
    }

    cout << "Pi value: " << pi * 2;
}

void task7() {
    double pi = 0;

    for (int i = 0; i < 1000000; i++) {
        pi = pi + 4.0 * pow(-1, i) / (2.0 * i + 1.0);
    }

    cout << "Pi value: " << pi;
}

int main() {
    int choice;

    while (1) {
        cout << "1 - task1 \n2 - task2 \n3 - task3\n4 - task4 \n5 - task5 \n6 - task6\n7 - task7" << endl << endl;
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
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
                break;
            case 7:
                task7();
                break;
        }
    }
}