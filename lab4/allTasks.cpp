#include <iostream>
#include <cmath>

double pi = 3.1415926535;

double triangleHeight (double a, double h) {
    return (0.5 * a * h);
}

double triangleHeron (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}

double rectangleArea (double a, double b) {
    return a * b;
}

double circleArea (double r) {
    return pi * pow(r,2);
}

int factorial (int a) {
    int result = 1;

    if (a != 1 && a > 0) {
        for (int mem = a; mem != 1; mem--) {
            result *= (mem - 1);
        }
        return result;
    } else {
        return result;
    }
}

double findMin (double a, double b) {
    return a > b ? b : a;
}

double toSec (double hour, double min, double sec) {
    return (hour * 60 * 60) + (min * 60) + sec;
}

int main() {
    int choice;
    double a,b,c,r,h,hour,min,sec;
    while (1) {
        std::cout << "1 - Find triangle area by height and side"
                     "\n2 - Find triangle area by three sides"
                     "\n3 - Find rectangle area"
                     "\n4 - Find circle area"
                     "\n5 - Find factorial"
                     "\n6 - Find minimal of two numbers"
                     "\n7 - hh:mm:ss to sec" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Insert height" << std::endl;
                std::cin >> h;

                std::cout << "Insert side" << std::endl;
                std::cin >> a;

                std::cout << "Triangle area: " << triangleHeight(a,h) << std::endl;
                break;
            case 2:
                std::cout << "Insert first side" << std::endl;
                std::cin >> a;

                std::cout << "Insert second side" << std::endl;
                std::cin >> b;

                std::cout << "Insert third side" << std::endl;
                std::cin >> c;

                std::cout << "Triangle area: " << triangleHeron(a,b,c) << std::endl;
                break;
            case 3:
                std::cout << "Insert first side" << std::endl;
                std::cin >> a;

                std::cout << "Insert second side" << std::endl;
                std::cin >> b;

                std::cout << "Rectangle area: " << rectangleArea(a,b) << std::endl;
                break;
            case 4:
                std::cout << "Insert radius" << std::endl;
                std::cin >> r;

                std::cout << "Circle area: " << circleArea(r) << std::endl;
                break;
            case 5:
                std::cout << "Insert int number" << std::endl;
                std::cin >> a;

                std::cout << "Factorial of number: " << factorial(a) << std::endl;
                break;
            case 6:
                std::cout << "Insert first number" << std::endl;
                std::cin >> a;

                std::cout << "Insert second number" << std::endl;
                std::cin >> b;

                std::cout << "Factorial of number: " << findMin(a,b) << std::endl;
            case 7:
                std::cout << "Insert hours" << std::endl;
                std::cin >> hour;

                std::cout << "Insert minutes" << std::endl;
                std::cin >> min;

                std::cout << "Insert seconds" << std::endl;
                std::cin >> sec;

                std::cout << "Your time in seconds: " << toSec(hour,min,sec) << std::endl;
        }
    }
}