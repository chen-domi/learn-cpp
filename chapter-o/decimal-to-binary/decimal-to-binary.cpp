#include <iostream>


void printBit(int x, int pow)
{
    std::cout << ((x / pow) % 2);
}


void print8BitBinary(int x) 
{
    printBit(x, 128);
    printBit(x, 64);
    printBit(x, 32);
    printBit(x, 16);
    
    std::cout << ' ';

    printBit(x, 8);
    printBit(x, 4);
    printBit(x, 2);
    printBit(x, 1);
}

int main()
{
    std::cout << "Input a number between 0 and 255: ";
    int input{};
    std::cin >> input;

    print8BitBinary(input);

    std::cout << '\n';

    return 0;
}
