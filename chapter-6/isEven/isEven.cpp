#include <iostream>

// 1. Write a program that asks the user to input an integer
// 2. Tells the user whether the number is even or odd
// 3. Write a contexpr function called isEven() that returns true or false
// Use the remained operator to test whether the integer parameter is even
// Make sure isEven() works with both positive and negative numbers

constexpr bool isEven(int x)
{
    return !(x % 2);
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x))
    {
        std::cout << x << " is an even number" << '\n';
    } else 
    {
        std::cout << x << " is an odd number" << '\n';
    }

    return 0;
}
