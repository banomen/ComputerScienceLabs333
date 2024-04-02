//
// Created by Omen on 02.04.2024.
//
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

struct point {
    float x;
    float y;
    float distToZero;
};

float distanceToCenter(float x, float y) {
    float result;
    result = sqrt(pow(0 - x,2) + pow(0 - y,2));
    return result;
}

void task1() {
    const int MAX = 5;
    point p[MAX];
    float maxDist,minDist;
    float minX,maxX = p[0].x;
    float minY,maxY = p[0].y;

    for(int i = 0; i <= MAX - 1; i++) {
        cout << "Input x of " << i + 1 << " point: " << endl;
        cin >> p[i].x;

        cout << "Input y of " << i + 1 << " point: " << endl;
        cin >> p[i].y;

        p[i].distToZero = distanceToCenter(p[i].x, p[i].y);
    }

    for (int i = 0; i < MAX; i++) {
        if (p[i].distToZero > p[i + 1].distToZero) {
            maxDist = p[i].distToZero;
            maxX = p[i].x;
            maxY = p[i].y;
        }

        if (p[i].distToZero < p[i + 1].distToZero) {
            minDist = p[i].distToZero;
            minX = p[i].x;
            minY = p[i].y;
        }
    }

    cout << "Max distance to zero coords is: " << maxDist << endl << "Coords of this point: " << maxX << ',' << maxY << endl << endl;
    cout << "Min distance to zero coords is: " << minDist << endl << "Coords of this point: " << minX << ',' << minY << endl << endl;
}

struct man {
    char name[50];
    char surname[50];
    int age;
};

void task2() {
    int MAX = 5;
    man m[MAX];

    int choise;

    for(int i = 0; i < MAX; i++) {
        cout << endl << i + 1<< ") Enter the name: " << endl;
        cin >> m[i].name;
        cout << "Enter the Surname: " << endl;
        cin >> m[i].surname;
        cout << "Enter the Age: " << endl;
        cin >> m[i].age;
    }

    cout << endl << "Chose sort type: \n"
                    "1 - by age \n"
                    "2 - by surename" << endl;
    cin >> choise;

    if (choise == 1) {
        for(int i = 0; i < MAX; i++) {
            for (int j = i + 1; j < MAX; j++) {
                if (m[i].age > m[j].age)
                    swap(m[i],m[j]);
            }
        }
    } else if (choise == 2) {
        for(int i = 0; i < MAX; i++) {
            for (int j = i + 1; j < MAX; j++) {
                if (strcmp(m[i].surname,m[j].surname) > 0)
                    swap(m[i],m[j]);
            }
        }
    }

    for(int i = 0; i < MAX; i++) {
        cout << i + 1 << ") " << m[i].name  << " " << m[i].surname << " " << m[i].age << "y.o." << endl;
    }
}

void task3() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    while (n > 0) {
        cout << n - 1 << endl;
    }
}

int main() {
    int choice;

    cout << "1 - max + min dist to zero coords \n"
            "2 - sort array of structures by age or surname \n"
            "3 - output all numbers before number\n";
    cin >> choice;

    while (1) {
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
            default:
                cout << "invalid task number. Restart";
                break;
        }
    }
}