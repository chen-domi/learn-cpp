// Write a program that asks for the name and age of two people, then prints which person is older.

// Here is the sample output from one run of the program:

// Enter the name of person #1: John Bacon
// Enter the age of John Bacon: 37
// Enter the name of person #2: David Jenkins
// Enter the age of David Jenkins: 44
// David Jenkins (age 44) is older than John Bacon (age 37).
#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::cout << "Enter the name of person #1: ";
    std::string name1{};
    std::getline(std::cin >> std::ws, name1);

    std::cout << "Enter the age of " << name1 << ": ";
    int age1{};
    std::cin >> age1;
   
    std::cout << "Enter the name of person #2: ";
    std::string name2{};
    std::getline(std::cin >> std::ws, name1);
    
    std::cout << "Enter the age of " << name2 << ": ";
    int age2{};
    std::cin >> age2;


    return 0;
}
