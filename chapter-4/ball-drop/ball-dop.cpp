#include <iostream>
#include <iomanip>
#include <cmath>

// 1. Ask for height of the tower in meters --
// 2. Program outputs the height of the ball above the ground after 0, 1, 2, 3, 4, 5 seconds
// 3. The ball must not go underneath the ground (height 0)

// Assuming normal gravity (9.8 m/s^2) and the ball has no initial velocity

// Use a function to calculate the height of the ball after x seconds.
// Function calculates how far the ball has fallen after x seconds using: distance fallen = gravity_constant * x_seconds^2 / 2

double getTowerHeight()
{
    double towerHeight{};
    do
    {
        std::cout << "Enter the height of the tower in meters: ";
        std::cin >> towerHeight;
        if (towerHeight <= 0)
            std::cout << "Height must be positive.\n";
    } while (towerHeight <= 0);

    return towerHeight;
}

void calculateHeight(double height)
{
    const double GRAVITY_CONSTANT{9.81};
    const double MIN_HEIGHT{0.0};
    double timeToGround{std::sqrt((2 * height) / GRAVITY_CONSTANT)};

    std::cout << std::fixed << std::setprecision(1);

    for (int i = 0; i < timeToGround + 1; i++)
    {
        double distanceFallen{(GRAVITY_CONSTANT * (static_cast<double>(i) * i)) / 2.0};
        double currentHeight{height - distanceFallen};

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
    double height{getTowerHeight()};
    calculateHeight(height);

    return 0;
}
