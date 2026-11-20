#include <iostream>
#include <string>
using namespace std;

// Forward declaration of the friend class
class ResultViewer;

class Student {
private:
    int rollNo;
    string name;
    float marks;
    static int studentCount;

public:
    // Inline member function
    inline void setDetails(int roll, string studentName, float score) {
        this->rollNo = roll;       // this pointer refers to the current object
        this->name = studentName;
        this->marks = score;
    }

    void displayDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Static member function
    static void displayCount() {
        cout << "Total students: " << studentCount << endl;
    }

    // Allow ResultViewer to access private members
    friend class ResultViewer;

    Student() {
        studentCount++;
    }
};

// Definition of the static data member
int Student::studentCount = 0;

// Friend class
class ResultViewer {
public:
    void showResult(const Student& s) {
        cout << "Result using friend class:" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    Student s1, s2;

    s1.setDetails(101, "Aarav", 85.5f);
    s2.setDetails(102, "Riya", 91.0f);

    cout << "Student 1 details:" << endl;
    s1.displayDetails();

    cout << "\nStudent 2 details:" << endl;
    s2.displayDetails();

    cout << endl;
    Student::displayCount();

    ResultViewer viewer;
    viewer.showResult(s1);

    return 0;
}
