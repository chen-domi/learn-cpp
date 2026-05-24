#include <iostream>


// that reads two separate integers from the user, 
// adds them together, and then outputs the answer. 

// void readNumber(int& x, int&y) 
// {
//     std::cout << "Enter two integers: ";
//     std::cin >> x >> y;
// }


int readNumber()
{
    std::cout << "Enter a number to add: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int&x, int&y) 
{
    std::cout << x << " + " << y << " = " << x + y << '\n';
}


int main()
{ 
    int x{ readNumber() };
    int y{ readNumber() };

    writeAnswer(x, y);

    return 0;
}
