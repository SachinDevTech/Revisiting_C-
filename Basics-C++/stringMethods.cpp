#include <iostream>
using namespace std;

int main()
{
    string s = "Hello World";

    // length
    s.length();

    // concatenation
    string a = "Hello ", b = "World";
    string res = a + b; // "Hello World"

    // Equality
    string a = "Test", b = "Test";
    bool res = a == b; // true
    a.compare(b);      // = 0 if equal, < 0 is a is smaller, > 0 if a is larger

    // Substring extraction
    s.substr(1, 4); // ello, first argument is starting index and second is length

    // Substring search
    s.find("orl"); // First index where "orl" is present in string. If not found returns string::npos

    // Replacing substring
    s.replace(0, 3, "Hi"); // Replaces 3 characters from index 0 with "Hi"

    // Inserting substring
    s.insert(6, "new "); // Hello new World, Inserts the substring at index 6

    // Iterators
    // s.begin()  s.end();

    // Erase
    s.erase(2, 3);                         // Erases 3 characters starting from index 2
    s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)

    return 0;
}