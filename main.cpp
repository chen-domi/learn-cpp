#include <iostream>

char selectOperation() {
    std::cout << "Enter +, -, *, or /: ";
    char operation{};
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "You entered: " << operation << '\n';
        case '-':
            std::cout << "You entered: " << operation << '\n';
        case '*':
            std::cout << "You entered: " << operation << '\n';
        case '/':
            std::cout << "You entered: " << operation << '\n';
    }

    return operation;
}

double getFloatValueFromUser() {
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;

    return input;
}

int main() {
    double x{ getFloatValueFromUser() };
    double y{ getFloatValueFromUser() };
    char operation{ selectOperation() };

    std::cout << x << ' '<< operation << ' ' << y << ' ' << '=' <<'\n';

    return 0;
}
