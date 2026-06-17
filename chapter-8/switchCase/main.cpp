#include <iostream>

int calculate(int x, int y, char c)
{
    switch (c)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        return 0;
    }

    
}

int main() 
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y;
    std::cin >> y;

    std::cout << "Enter a mathematical operation (+, -. *, /, %): ";
    char c;
    std::cin >> c;

    calculate(x, y, c);
    return 0;
}
