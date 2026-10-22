
#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void makePayment()
    {
        cout << "Make a general payment" << endl;
    }
};

class Credit : public Payment
{
public:
    void makePayment()
    {
        cout << "Make a credit card payment" << endl;
    }
};

class Upi : public Payment
{
public:
    void makePayment()
    {
        cout << "Make a Upi payment" << endl;
    }
};

int main()
{
    Payment *p;

    Credit c;
    p = &c;
    p->makePayment();

    Upi u;
    p = &u;
    p->makePayment();

    p->Payment::makePayment();

    return 0;
}
