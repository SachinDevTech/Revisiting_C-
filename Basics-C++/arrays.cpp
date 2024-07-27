#include <iostream>

int main()
{
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}
