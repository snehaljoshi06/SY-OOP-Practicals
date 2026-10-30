
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
        cout << "Default Constructor:" << endl;
    }

    // Parameterized constructor
    Student(int r, string n, int m)
    {
        rollNo = r;
        name = n;
        marks = m;
        cout << "Parameterized Constructor:" << endl;
    }

    // Copy constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        marks = s.marks;
        cout << "Copy Constructor:" << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    cout << endl;

    Student s2(101, "Snehal", 85);
    s2.display();

    cout << endl;

    Student s3(s2);
    s3.display();

    return 0;
}
