//
// Created by Omen on 26.03.2024.
//
#include <iostream>
using namespace std;

void swap(float &a, float &b) {
    if (a > b) {
        a = 100; b = 0;
    } else if (a < b) {
        a = 0; b = 100;
    }
}

void task1() {
    float f, s;

    cout << "Enter first number: " << endl;
    cin >> f;
    cout << "Enter second number: " << endl;
    cin >> s;
    swap(f, s);

    cout << "First number = " << f << endl << "Second number = " << s << endl << endl;
}

void maximum(float* arr, int &limit) {
    float max = 0;

    for (int i = 0; i < limit; i++) {
        if(*(arr + i) >= max) {
            max = *(arr + i);
        }
    }

    cout << "Max value: " << max << endl << endl;
}

void task2() {
    int n = 10;
    auto *arr = new float [n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " element" << endl;
        cin >> arr[i];
    }

    maximum(arr,n);
    delete[] arr;
}

void removeNegatives(float* arr, int &limit) {
    for (int i = 0; i < limit; i++) {
        if(*(arr + i) < 0) {
            *(arr + i) = 0;
        }
    }

    cout << "Array with out negatives: [";
    for (int i = 0; i < limit; i++) {
        cout << *(arr + i) << ',';
    }
    cout << ']' << endl << endl;
}

void task3() {
    int n = 10;
    auto *arr = new float [n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " element" << endl;
        cin >> arr[i];
    }

    cout << "Array with negatives: [";
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << ',';
    }
    cout << ']' << endl;

    removeNegatives(arr, n);
    delete[] arr;
}

int main() {
    while (1) {
        int choice;
        cout << "1 - number swap\n"
                "2 - find max\n"
                "3 - negative to zero" << endl;
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