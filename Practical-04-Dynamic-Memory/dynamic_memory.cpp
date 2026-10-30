
#include <iostream>
using namespace std;

void updateMarks(int &marks)
{
    marks = marks + 5;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students.";
        return 0;
    }

    int *marks = new int[n];

    if (marks == NULL)
    {
        cout << "Memory allocation failed.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        updateMarks(marks[i]);
    }

    cout << "\nUpdated Student Marks:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1
             << ": " << *(marks + i) << endl;
    }

    delete[] marks;
    marks = NULL;

    cout << "\nMemory released successfully.";

    return 0;
}
