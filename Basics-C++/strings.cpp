#include <iostream>
#include <string> // Include the string library

// int main()
// {
//     // String declaration and initialization
//     std::string greeting = "Hello, World!";

//     // Output the string
//     std::cout << greeting << std::endl;

//     // String concatenation
//     std::string name = "John";
//     std::string welcomeMessage = greeting + " " + name;
//     std::cout << welcomeMessage << std::endl;

//     // String length
//     std::cout << "Length of the greeting: " << greeting.length() << std::endl;

//     return 0;
// }

// Input/Output in c++
using namespace std;

int main()
{
    // taking input
    string s;
    cin >> s;
    cout << "The string you entered is: " << s << endl;

    // Accessing charcters
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }

    for (char x : s)
    {
        cout << x << " ";
    }

    // updating string value
    s = "Hellw";
    s[4] = 'o';
    return 0;
}
