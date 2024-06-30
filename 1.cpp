#include <iostream>
using namespace std;

// Class definition
class Student
{
private:
    string className;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize the attributes
    Student(string cls, int roll, float m)
    {
        className = cls;
        rollNumber = roll;
        marks = m;
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Creating objects of Student class
    Student student1("XII", 101, 95.5);
    Student student2("X", 205, 88.0);

    // Displaying details of students
    cout << "Student 1 Details:" << endl;
    student1.displayDetails();
    cout << endl;

    cout << "Student 2 Details:" << endl;
    student2.displayDetails();

    return 0;
}
