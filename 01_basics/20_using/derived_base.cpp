#include <iostream>
using namespace std;

class Base1
{
public:
    Base1(): value(10) {}
    virtual ~Base1() {}
    void test1()
    {
        cout << "Base test1..." << endl;
    }
protected:
    int value;
};

class Derived1 : Base1
{
public:
    void test2()
    {
        cout << "value is " << value << endl;
    }
};

class Base
{
public:
    Base(): value(20) {}
    virtual ~Base() {}
    void test1()
    {
        cout << "Base test..." << endl;
    }
private:
    int value;
};

class Derived : Base
{
public:
    using Base::value;
    void test2()
    {
        cout << "value is " << value << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.test2();

    Derived d;
    d.test2();

    return 0;
}
