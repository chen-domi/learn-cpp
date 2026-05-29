#include <iostream>
#include <vector>

// 1. Get first floating point value from the user --
// 2. Get second floating point value from the user --
// 3. Get mathematical symbol from user --
// 4. Program computers the answer -- 
// 5. Program prints the result. -- 

// If the user enters an invalid symbol, the program should print nothing

// Attempt all in main function

int main()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    std::cout << "Enter a double value: ";
    double y{};
    std::cin >> y;

    std::cout << "Enter operator (+, -, *, /): ";
    char op{};
    std::cin >> op;

    switch (op)
    {
    case '+':
        std::cout << x << ' ' << op << ' ' << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << ' ' << op << ' ' << y << " is " << x - y << '\n';
        break;

    case '*':
        std::cout << x << ' ' << op << ' ' << y << " is " << x * y << '\n';
        break;
    case '/':
        if (y == 0)
        {
            std::cout << "Error: Division by 0 \n";
            break;
        }
        else
        {
            std::cout << x << ' ' << op << ' ' << y << " is " << x / y << '\n';
            break;
        }
    }

    return 0;
}
