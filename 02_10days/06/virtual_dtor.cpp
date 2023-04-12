#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A() { cout << "call A::~A()" << endl; }
};

class B : public A
{
    char *buf;
public:
    B(int i) { buf = new char[i]; }
    ~B()
    {
        delete[] buf;
        cout << "call B::~B()" << endl;
    }
};

int main()
{
    A *a = new B(10);
    delete a;

}
