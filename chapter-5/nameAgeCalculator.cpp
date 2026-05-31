#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    name.erase(std::remove(name.begin(), name.end(), ' '), name.end());


    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
    
    int nameLength{ static_cast<int>(name.length())};

    std::cout << "Your age + length of name is: " << nameLength + age << '\n';
    
    return 0;
}
