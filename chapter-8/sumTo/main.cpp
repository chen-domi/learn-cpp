#include <iostream> 

int sumTo(int value)
{
    int total{};

    for (int i{ 1 }; i <= value; ++i)
        total += i;

    return total;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "The sum of all the numbers from 1 to " << x << " is " << sumTo(x) << '\n';

    return 0;
}
