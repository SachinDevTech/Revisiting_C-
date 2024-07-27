#include <iostream>

int main()
{
    // for loop
    for (int i = 0; i < 5; i++)
    {
        std::cout << "For Loop iteration: " << i << std::endl;
    }

    // while loop
    int j = 0;
    while (j < 5)
    {
        std::cout << "While Loop iteration: " << j << std::endl;
        j++;
    }

    // do-while loop
    int k = 0;
    do
    {
        std::cout << "Do-While Loop iteration: " << k << std::endl;
        k++;
    } while (k < 5);

    return 0;
}
