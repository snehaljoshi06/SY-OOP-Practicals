
# Practical 8: Exception Handling in C++

## Student Details
- **Name:** Snehal Yogesh Joshi
- **PRN:** 202501110055
- **Branch:** Computer Science Engineering (AI & ML)
- **Division:** B
- **Batch:** B1

## Aim
To implement exception handling in C++ using try, throw, and catch blocks.

## Problem Statement
1. Write a C++ program to handle division by zero using exception handling.
2. Write a C++ program to check voting eligibility and handle an exception when the age is below 18.

## Concepts Used
- Exception handling
- try block
- throw statement
- catch block
- runtime_error exception
- e.what() function

## Programs
1. `division_by_zero.cpp` — Handles division by zero.
2. `runtime_exception.cpp` — Handles an exception when a person is not eligible to vote.

## Sample Output

### Program 1: Division by Zero
```text
Enter two numbers: 10 0
Exception caught: Division by zero is not allowed!
Program continues...
```

### Program 2: Runtime Exception
```text
Enter your age: 16
Exception: You are not eligible to vote.
```

## How to Compile and Run

Compile Program 1:
```bash
g++ division_by_zero.cpp -o division_by_zero
```

Run Program 1:
```bash
./division_by_zero
```

Compile Program 2:
```bash
g++ runtime_exception.cpp -o runtime_exception
```

Run Program 2:
```bash
./runtime_exception
```

On Windows, run the generated programs using:
```bash
division_by_zero.exe
runtime_exception.exe
```

## Result
Exception handling was implemented using try, throw, and catch blocks to handle division by zero and voting eligibility exceptions.

## Repository
SY-OOP-Practicals
