#include <iostream>
#include <iomanip>

// 1. Ask for height of the tower in meters --
// 2. Program outputs the height of the ball above the ground after 0, 1, 2, 3, 4, 5 seconds
// 3. The ball must not go underneath the ground (height 0)

// Assuming normal gravity (9.8 m/s^2) and the ball has no initial velocity

// Use a function to calculate the height of the ball after x seconds.
// Function calculates how far the ball has fallen after x seconds using: distance fallen = gravity_constant * x_seconds^2 / 2

double getTowerHeight() 
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    
    return towerHeight;
}

void calculateHeight(double height)
{
    const double GRAVITY_CONSTANT{9.81};
    const double MIN_HEIGHT{0.0};

    std::cout << std::fixed << std::setprecision(1);

    for (int i = 0; i < 6; i++)
    {
        double distanceFallen {(GRAVITY_CONSTANT * (i * i)) / 2.0};
        double currentHeight {height - distanceFallen};

        if (currentHeight > MIN_HEIGHT)
        {
            std::cout << "At " << i << " seconds, the ball is at height: " << currentHeight << " meters \n";
        }
        else
        {
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
        }
    }
}

int main()
{
    double height {getTowerHeight()};
    calculateHeight(height);

    return 0;
}
