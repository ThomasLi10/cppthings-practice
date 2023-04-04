#include <iostream>

using namespace std;

class Base
{
    int x;
public:
    Base(int a)
    {
        x = a;
        cout << "Base constructor x = " << x << endl;
    }
    ~Base()
    {
        cout << "Base destructor..." << endl;
    }
};

class Derived: public Base
{
    int y;
public:
    Derived(int a, int b): Base(a)
    {
        y = b;
        cout << "Derived constructor y = " << y << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor..." << endl;
    }
};

int main()
{
    Derived d(1,2);
    return 0;
}

