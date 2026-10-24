# Practical 9 – std::move Utility

## Aim
To demonstrate the use of std::move with a C++ string.

## Concepts Used
- C++ strings
- <utility> header
- std::move
- Move semantics

## Sample Output

Before moving:
str1 = Hello, C++ Programming

After moving:
str1 =
str2 = Hello, C++ Programming

Note: The moved-from string str1 remains valid, but its value is unspecified. It may be empty.

## Compile and Run

g++ std_move.cpp -o std_move
./std_move

## Result
The program demonstrates moving a string value using std::move.
