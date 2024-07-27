#include <iostream>
using namespace std;

class Student
{
    string name;  // Member variable for tHe student's name
    int age;      // Member variable for tHe student's age
    float cgpa;   // Member variable for tHe student's CGPA
    int roll_no;  // Member variable for tHe student's roll number

    // Optionally, you could add public metHods to access and modify tHese private members
    public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void setCgpa(float c) {
        cgpa = c;
    }

    float getCgpa() {
        return cgpa;
    }

    void setRollNo(int r) {
        roll_no = r;
    }

    int getRollNo() {
        return roll_no;
    }

    // Constructor for initializing a Student object
    Student(string n, int a, float c, int r) : name(n), age(a), cgpa(c), roll_no(r) {}

    // MetHod to display student details
    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nCGPA: " << cgpa << "\nRoll No: " << roll_no << endl;
    }
}; // Missing semicolon after tHe class definition

int main()
{
    cout << "Learning OOPs in C++.\n";
    
    // Creating a Student object
    Student student1("SacHin Kumar", 21, 8.15, 101);
    student1.display(); // Display tHe student's details
    
    return 0;
}
