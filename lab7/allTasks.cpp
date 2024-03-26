//
// Created by Omen on 26.03.2024.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct point {
    float x[2];
    float y[2];
};

void task1() {
    point p{};

    cout << "Enter x1: " << endl;
    cin >> p.x[0];
    cout << "Enter y1: " << endl;
    cin >> p.y[0];

    cout << "Enter x2: " << endl;
    cin >> p.x[1];
    cout << "Enter y2: " << endl;
    cin >> p.y[1];

    cout << "Distance: " << sqrt(pow((p.x[0] - p.x[1]),2) + pow((p.y[0] - p.y[1]),2)) << endl;
}

struct date {
    int day, month, year;
};

struct man {
    char name[80], surename[80];
};

void task2() {
    date d;
    man m;

    cout <<"Enter name: " << endl;
    cin >> m.name;
    cout <<"Enter surename: " << endl;
    cin >> m.surename;

    cout << "Enter day of birth: " << endl;
    cin >> d.day;
    cout << "Enter month of birth: " << endl;
    cin >> d.month;
    cout << "Enter year of birth: " << endl;
    cin >> d.year;

    cout <<"Name: " << m.name << endl << "Surename: " << m.surename << endl <<"Date of birth: " << d.day << "." << d.month <<"." << d.year << endl;
}

void task3() {
    date d;
    man m;

    cout <<"Enter name: " << endl;
    cin >> m.name;
    cout <<"Enter surename: " << endl;
    cin >> m.surename;

    cout << "Enter day of birth: " << endl;
    cin >> d.day;
    cout << "Enter month of birth: " << endl;
    cin >> d.month;
    cout << "Enter year of birth: " << endl;
    cin >> d.year;

    string month;

    if (d.month == 1) {
        month = "January";
    } else if (d.month == 2) {
        month = "February";
    } else if (d.month == 3) {
        month = "March";
    } else if (d.month == 4) {
        month = "April";
    } else if (d.month == 5) {
        month = "May";
    } else if (d.month == 6) {
        month = "June";
    } else if (d.month == 7) {
        month = "July";
    } else if (d.month == 8) {
        month = "August";
    } else if (d.month == 9) {
        month = "September";
    } else if (d.month == 10) {
        month = "October";
    } else if (d.month == 11) {
        month = "November";
    } else if (d.month == 12) {
        month = "December";
    }

    cout <<"Name: " << m.name << endl << "Surename: " << m.surename << endl <<"Date of birth: " << d.day << " " << month <<" " << d.year << endl;
}

int main() {
    while (1) {
        int choice;
        cout << "1 - dist between 2 points\n"
                "2 - find max\n"
                "3 - negative to zero" << endl;
        cin >> choice;

        switch (choice) {
            default:
                cout << "Invalid task" << endl;
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