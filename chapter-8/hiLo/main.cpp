#include "Random.h"
#include <iostream>

// 1. Generate a random number
// 2. Have user guess -> std::cin >> guess
// 3. Check if the guess is correct -> if (guess == randomValue)
// 3a. If correct -> std::cout << "Correct! You win!" -> std::cout << "Would you like to play again? "
// 3b. If not correct -> keep guessing up to and including 7th guess and check if new guess == < > randomValue
// 4. If lose -> std::cout << "Sorry, you lose. The correct number was " -> std::cout << "Would you like to play again? "
// 4a. If yes, generate a new random number and guess again
// 4b. if no, std::cout << "Thank you for playing"

bool playHilo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
    const int number{ Random::get(min, max) };

    for (int count { 1 }; count <= guesses; ++count)
    {
        std::cout << "Guess # " << count << ": ";

        int guess{};
        std::cin >> guess;

        if (guess > number)
            std::cout << "Your guess is too high.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << number << '\n';
    return false;
}


bool playAgain()
{
    while (true)
    {
        char ch{};
        std::cout << "Would you like to play again? (y/n) ";
        std::cin >> ch;

        switch (ch)
        {
        case 'y': return true;
        case 'n': return false;
        }
    }
}
int main()
{
    constexpr int guesses { 7 };
    constexpr int min     { 1 };
    constexpr int max     { 100 };

    do
    { 
        playHilo(guesses, min, max);
    } while (playAgain());

    return 0;
}
