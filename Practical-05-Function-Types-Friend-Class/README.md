# Practical 5: Function Types, Friend Class

## Aim
To write a C++ program demonstrating classes and objects, the `this` pointer, an inline function, a static data member and static member function, and a friend class.

## Concepts Used
- **Class and objects:** `Student` is the class; `s1` and `s2` are its objects.
- **this pointer:** Used in `setDetails()` to refer to the current object.
- **Inline function:** `setDetails()` is declared inline inside the class.
- **Static data member:** `studentCount` is shared by all Student objects.
- **Static member function:** `displayCount()` displays the shared object count.
- **Friend class:** `ResultViewer` is declared as a friend and accesses private student details.

## Header Files
- `iostream` for input/output.
- `string` for student names.

## Expected Output
```text
Student 1 details:
Roll No: 101
Name: Aarav
Marks: 85.5

Student 2 details:
Roll No: 102
Name: Riya
Marks: 91

Total students: 2
Result using friend class:
Name: Aarav
Marks: 85.5
```

## How to Run
Compile `list_class.cpp` using a C++ compiler, then run the generated executable.
