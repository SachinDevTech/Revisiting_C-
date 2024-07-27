#include <iostream>

int main()
{
    int age = 20;

    // if-else statement
    if (age >= 18)
    {
        std::cout << "You are an adult." << std::endl;
    }
    else
    {
        std::cout << "You are a minor." << std::endl;
    }

    // switch statement
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        std::cout << "Excellent!" << std::endl;
        break;
    case 'B':
        std::cout << "Good!" << std::endl;
        break;
    case 'C':
        std::cout << "Fair!" << std::endl;
        break;
    default:
        std::cout << "Invalid grade!" << std::endl;
        break;
    }

    return 0;
}
