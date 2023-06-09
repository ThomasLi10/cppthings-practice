#include <iostream>
#include <string>

using namespace std;

class A
{
public:
    void f(int i) { cout << "A::f()" << endl; }
};

class B : public A
{
public:
    virtual void f(int i) { cout << "B::f()" << endl; }
};

class C : public B
{
public:
    void f(int i) { cout << "C::f()" << endl; }
};

class D : public C
{
public:
    void f(int) { cout << "D::f()" << endl; }
};

int main()
{
    A *pA, a;
    B *pB, b;
    C c;
    D d;

    pA = &a;
    pA->f(1);

    pB = &b;
    pB->f(1);

    pB = &c;
    pB->f(1);

    pB = &d;
    pB->f(1);
}

