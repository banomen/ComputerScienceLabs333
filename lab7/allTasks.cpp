#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

struct point {
    float x[2];
    float y[2];
};

struct date {
    int day, year;
    string month;
};

struct man {
    char name[80], surename[80];
    date birthDate;
};

void task1() {
    point p;

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

void task2() {
    man m;

    cout <<"Enter name: " << endl;
    cin >> m.name;
    cout <<"Enter surename: " << endl;
    cin >> m.surename;

    cout << "Enter day of birth: " << endl;
    cin >> m.birthDate.day;
    cout << "Enter month of birth: " << endl;
    cin >> m.birthDate.month;
    cout << "Enter year of birth: " << endl;
    cin >> m.birthDate.year;

    cout << "Name: " << m.name << endl << "Surename: " << m.surename << endl << "Date of birth: " << m.birthDate.day << "." << m.birthDate.month << "." << m.birthDate.year << endl;
}

void task3() {
    man m;

    int monthNumber;

    cout <<"Enter name: " << endl;
    cin >> m.name;
    cout <<"Enter surename: " << endl;
    cin >> m.surename;
    cout << "Enter day of birth: " << endl;
    cin >> m.birthDate.day;

    cout << "Enter month of birth (1-12): " << endl;
    cin >> monthNumber;
    if (monthNumber < 1 || monthNumber > 12) {
        std::cout << "invalid month number" << endl << endl;
        return;
    }

    cout << "Enter year of birth: " << endl;
    cin >> m.birthDate.year;

    Month month = static_cast<Month>(monthNumber);

    switch (month) {
        case January: m.birthDate.month = "January"; break;
        case February: m.birthDate.month = "February"; break;
        case March: m.birthDate.month = "March"; break;
        case April: m.birthDate.month = "April"; break;
        case May: m.birthDate.month = "May"; break;
        case June: m.birthDate.month = "June"; break;
        case July: m.birthDate.month = "July"; break;
        case August: m.birthDate.month = "August"; break;
        case September: m.birthDate.month = "September"; break;
        case October: m.birthDate.month = "October"; break;
        case November: m.birthDate.month = "November"; break;
        case December: m.birthDate.month = "December"; break;
    }

    cout << "Name: " << m.name << endl << "Surename: " << m.surename << endl << "Birth date: " << m.birthDate.month << ' ' << m.birthDate.day << ', ' << m.birthDate.year << endl << endl;
}

int main() {
    while (1) {
        int choice;
        cout << "1 - dist between 2 points\n"
                "2 - date, name, surename\n"
                "3 - date with Month names, name, surename" << endl;
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