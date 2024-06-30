#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    // for name with space:(**Only name is allowed in a line when a space is taken)
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    getchar(); //**It is used to remove the taken enter after the first input of 'a' class

    // for name without space:
    // cin >> a.name >> a.roll >> a.cgpa;

    // for name with space:
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    // cin >> b.name >> b.roll >> b.cgpa;
    // a.roll = 29;
    // a.cgpa = 3.95;
    // not allowed  a.name="rakib";
    //  you have to copy name into another array and then copy it to another
    // char tmp[100] = "rakib";
    // strcpy(a.name, tmp);
    cout << a.name << " " << a.roll << " " << a.cgpa << " " << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << " " << endl;
    return 0;
}