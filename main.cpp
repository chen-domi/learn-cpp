#include <iostream>

bool isEqual(int x, int y) {
    return x == y;
}

int getInteger() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x{ getInteger() };
    int y{ getInteger() };
    
    std::cout << std::boolalpha;
    if (isEqual(x, y)) 
        std::cout << x << " and " << y << " are equal\n";
    else 
        std::cout << x << " and " << y << "are not equal\n";
        
    return 0;
}
