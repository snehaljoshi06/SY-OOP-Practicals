
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Default constructor
    Number()
    {
        value = 0;
    }

    // Parameterized constructor
    Number(int v)
    {
        value = v;
    }

    // Overloading + operator
    Number operator+(const Number &obj)
    {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3;

    cout << "First Number:" << endl;
    n1.display();

    cout << "Second Number:" << endl;
    n2.display();

    n3 = n1 + n2;

    cout << "Addition of Number 1 and Number 2:" << endl;
    n3.display();

    return 0;
}
