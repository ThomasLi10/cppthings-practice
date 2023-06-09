#include <iostream>

using namespace std;

class A
{
public:
    virtual void f()
    {
        cout << "Base A::f()" << endl;
    }
};

class B : public A
{
public:
    virtual void f()
    {
        cout << "Derived B::f()" << endl;
    }
};

int main()
{
    A a;
    B b;

    A* pa = &a;
    pa->f();
    
    pa = &b;
    pa->f();

    return 0;
}
