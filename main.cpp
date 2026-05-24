#include <iostream>


// that reads two separate integers from the user, 
// adds them together, and then outputs the answer. 

void readNumber(int& x, int&y) 
{
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
}

int writeAnswer(int&x, int&y) 
{
    return x + y;
}


int main()
{ 
    int x{}, y{};
    readNumber(x, y);
    // std::cout << "You entered: " << x << " and " << y << '\n';
    std::cout << x << " + " << y << " is " << writeAnswer(x, y) << '\n';
    return 0;
}
