#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z; // read three numbers from the user

    std::cout << "You entered " << x << " and " << y << " and " << z << "\n";

    return 0;
}
