#include <iostream>

int main()
{
    int outer{ 5 };
    while (outer >= 1)
    {
        int inner{ outer };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            --inner;
            if (inner < 1)
                break;
        }
        
        std::cout << '\n';
        --outer;

    }

    return 0;
}
