#include <iostream>
#include <string>
#include <string_view>

std::string getFullName()
{
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view person)
{
    std::cout << "Enter the age of " << person << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void calculateWhoIsOlder() {

}

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string p1{getFullName()};
    int age1{getAge(p1)};

    std::cout << "Enter the name of person #2: ";
    std::string p2{getFullName()};
    int age2{getAge(p2)};

    // std::cout << p1 << " and " << p2 << '\n';
    // std::cout << age1 << "and" << age2 << '\n';

    std::cout << p1 << " is " << age1 << '\n';
    std::cout << p2 << " is " << age2 << '\n';

    // std::cout << "Enter the age of " << name1 << ": ";
    // int age1{};
    // std::cin >> age1;

    // std::cout << "Enter the age of " << name2 << ": ";
    // int age2{};
    // std::cin >> age2;

    // if (age1 > age2)
    // {
    //     std::cout << name1 << " (age " << age1 << ')' << " is older than " << name2 << " (age " << age2 << ").\n";
    // }
    // else
    // {
    //     std::cout << name2 << " (age " << age2 << ')' << " is older than " << name1 << " (age " << age1 << ").\n";
    // }
    // return 0;
}
