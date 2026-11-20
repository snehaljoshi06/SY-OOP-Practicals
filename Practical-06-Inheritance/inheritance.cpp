#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Person constructor called." << endl;
    }

    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person()
    {
        cout << "Person destructor called." << endl;
    }
};

// 1. Single inheritance: Student inherits from Person.
// Virtual inheritance also supports the hybrid diamond structure below.
class Student : virtual public Person
{
protected:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a), rollNo(r)
    {
        cout << "Student constructor called." << endl;
    }

    void displayStudent() const
    {
        displayPerson();
        cout << "Roll No: " << rollNo << endl;
    }

    void displayAcademicDetails() const
    {
        cout << "Roll No: " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Student destructor called." << endl;
    }
};

// Employee is another derived class of Person.
class Employee : virtual public Person
{
protected:
    int employeeId;

public:
    Employee(string n, int a, int id) : Person(n, a), employeeId(id)
    {
        cout << "Employee constructor called." << endl;
    }

    void displayEmployee() const
    {
        displayPerson();
        cout << "Employee ID: " << employeeId << endl;
    }

    void displayEmploymentDetails() const
    {
        cout << "Employee ID: " << employeeId << endl;
    }

    ~Employee()
    {
        cout << "Employee destructor called." << endl;
    }
};

// 2. Multilevel inheritance: Person -> Student -> GraduateStudent.
class GraduateStudent : public Student
{
private:
    string specialization;

public:
    GraduateStudent(string n, int a, int r, string s)
        : Person(n, a), Student(n, a, r), specialization(s)
    {
        cout << "GraduateStudent constructor called." << endl;
    }

    void displayGraduateStudent() const
    {
        displayStudent();
        cout << "Specialization: " << specialization << endl;
    }

    ~GraduateStudent()
    {
        cout << "GraduateStudent destructor called." << endl;
    }
};

// 3. Hierarchical inheritance: Student and Employee share Person as base.
// Teacher is a further derived class of Employee.
class Teacher : public Employee
{
private:
    string subject;

public:
    Teacher(string n, int a, int id, string sub)
        : Person(n, a), Employee(n, a, id), subject(sub)
    {
        cout << "Teacher constructor called." << endl;
    }

    void displayTeacher() const
    {
        displayEmployee();
        cout << "Subject: " << subject << endl;
    }

    ~Teacher()
    {
        cout << "Teacher destructor called." << endl;
    }
};

// 4. Multiple inheritance: TeachingAssistant inherits Student and Employee.
// 5. Hybrid inheritance: combines hierarchical and multiple inheritance.
// Virtual inheritance ensures only one shared Person base subobject.
class TeachingAssistant : public Student, public Employee
{
private:
    string assignedCourse;

public:
    TeachingAssistant(string n, int a, int r, int id, string course)
        : Person(n, a),
          Student(n, a, r),
          Employee(n, a, id),
          assignedCourse(course)
    {
        cout << "TeachingAssistant constructor called." << endl;
    }

    void displayTeachingAssistant() const
    {
        displayPerson();
        displayAcademicDetails();
        displayEmploymentDetails();
        cout << "Assigned Course: " << assignedCourse << endl;
    }

    ~TeachingAssistant()
    {
        cout << "TeachingAssistant destructor called." << endl;
    }
};

int main()
{
    cout << "\n===== 1. SINGLE INHERITANCE =====" << endl;
    {
        Student s("Snehal", 20, 101);
        s.displayStudent();
    }

    cout << "\n===== 2. MULTILEVEL INHERITANCE =====" << endl;
    {
        GraduateStudent g("Amod", 21, 102, "Artificial Intelligence");
        g.displayGraduateStudent();
    }

    cout << "\n===== 3. HIERARCHICAL INHERITANCE =====" << endl;
    {
        Teacher t("Rahul", 35, 501, "C++ Programming");
        t.displayTeacher();
    }

    cout << "\n===== 4. MULTIPLE AND 5. HYBRID INHERITANCE =====" << endl;
    {
        TeachingAssistant ta("Snehal", 20, 101, 601, "Data Structures");
        ta.displayTeachingAssistant();
    }

    return 0;
}