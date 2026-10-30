
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
    Student()
    {
        rollNo = 101;
        name = "Snehal";
        marks = 85;
        cout << "Student object created." << endl;
    }

    void displayDetails()
    {
        cout << "Student Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }

    ~Student()
    {
        cout << "Student object destroyed." << endl;
    }
};

int main()
{
    Student s;
    s.displayDetails();

    return 0;
}
