#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // Student(int r, int c, double g)
    Student(int roll, int cls, double gpa)
    {
        // roll = r;
        // cls = c;
        // gpa = g;
        this->roll = roll; // same as the next pointer with star(*) 'this'
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};
int main()
{
    Student rahim(10, 9, 5.01);
    Student karim(46, 12, 4.33);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}