#include <iostream>
#include <vector>

bool isPrime(int x) {
    std::vector<int> primeNumbers = {2, 3, 5, 7};
    return std::find(primeNumbers.begin(), primeNumbers.end(), x) != primeNumbers.end();
}

int getUserValue() {
    int x{};

    do {
        std::cout << "Enter an integer 0-9: ";
        std::cin >> x;

        if (x < 0 || x > 9) {
            std::cout << x << " is not a valid input,\n";
        } 
    } while (x < 0 || x > 9);

    return x;
}

int main() {
    int x{ getUserValue() };
    
    if (isPrime(x)) {
        std::cout << x << " is a prime number \n";
    }
    else {
        std::cout << x << " is not a prime number \n";
    }

    return 0;
}
