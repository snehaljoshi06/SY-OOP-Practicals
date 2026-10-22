# Practical 6: Inheritance

## Aim
To implement single inheritance in C++ using a base class `Person` and a derived class `Student`.

## Problem Statement
To demonstrate single inheritance, constructors, destructors, protected data members, and displaying student details.

## Programming Language
C++

## Header Files
- `iostream`
- `string`

## Concepts Used
- Single inheritance
- Base class and derived class
- Protected data members
- Constructors and destructors
- Constructor initializer list

## Program
`inheritance.cpp`

## Sample Output
```text
Person constructor called.
Student constructor called.

--- Student Details ---
Name : Snehal
Age  : 20
Roll No : 101
Student destructor called.
Person destructor called.
```

## How to Compile and Run
Compile the program using a C++ compiler:

```bash
g++ inheritance.cpp -o inheritance
```

Run the program:

```bash
./inheritance
```

On Windows, run `inheritance.exe` after compiling.

## Observation
The base class constructor executes before the derived class constructor. During destruction, the derived class destructor executes before the base class destructor.

## Conclusion
Single inheritance was implemented successfully using the `Person` and `Student` classes.
