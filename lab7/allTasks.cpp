#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

enum monthConverter {
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

    cout << "Name: " << m.name << endl << "Surename: " << m.surename << endl << "Date of birth: " << d.day << "." << d.month << "." << d.year << endl;
}

void task3() {
    date d;
    man m;

    int monthNumber;

    cout <<"Enter name: " << endl;
    cin >> m.name;
    cout <<"Enter surename: " << endl;
    cin >> m.surename;

    cout << "Enter day of birth: " << endl;
    cin >> d.day;

    cout << "Enter month of birth: " << endl;
    cin >> monthNumber;
    if (monthNumber < 1 || monthNumber > 12) {
        std::cout << "invalid month number" << endl << endl;
        return;
    }

    cout << "Enter year of birth: " << endl;
    cin >> d.year;

    monthConverter month = static_cast<monthConverter>(monthNumber);

    switch (month) {
        case January: d.month = "January"; break;
        case February: d.month = "February"; break;
        case March: d.month = "March"; break;
        case April: d.month = "April"; break;
        case May: d.month = "May"; break;
        case June: d.month = "June"; break;
        case July: d.month = "July"; break;
        case August: d.month = "August"; break;
        case September: d.month = "September"; break;
        case October: d.month = "October"; break;
        case November: d.month = "November"; break;
        case December: d.month = "December"; break;
    }

    cout << "Name: " << m.name << endl << "Surename: " << m.surename << endl << "Date of birth: " << d.day << ' ' << d.month << ' ' << d.year << endl << endl;
}

int main() {
    while (1) {
        int choice;
        cout << "1 - dist between 2 points\n"
                "2 - date, name, surename\n"
                "3 - date with monthConverter names, name, surename" << endl;
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