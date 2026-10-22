#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Person constructor called." << endl;
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }

    ~Person()
    {
        cout << "Person destructor called." << endl;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a)
    {
        rollNo = r;
        cout << "Student constructor called." << endl;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Roll No : " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Student destructor called." << endl;
    }
};

int main()
{
    Student s("Snehal", 20, 101);
