#include <iostream>

int doubleNumber(int x) {
    return x * 2;
}

int getUserInteger() {
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;

    return x;
}

int main() {
    int input{ getUserInteger() };
    std::cout << input << " doubled is "<< doubleNumber(input) << '\n';

    return 0;
}
