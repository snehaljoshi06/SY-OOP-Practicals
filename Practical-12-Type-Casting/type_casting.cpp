#include <iostream>
using namespace std;

int main()
{
    // Implicit type casting
    int a = 10;
    float b = 5.5;

    float sum = a + b;

    cout << "Implicit Type Casting" << endl;
    cout << "Integer value: " << a << endl;
    cout << "Float value: " << b << endl;
    cout << "Sum: " << sum << endl;

    // Explicit type casting
    int x = 10, y = 3;

    float result = static_cast<float>(x) / y;

    cout << "\nExplicit Type Casting" << endl;
    cout << "First number: " << x << endl;
    cout << "Second number: " << y << endl;
    cout << "Division result: " << result << endl;

    return 0;
}
