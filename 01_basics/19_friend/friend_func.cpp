#include <iostream>

using namespace std;

class A
{
public:
    A(int _a): a(_a) {};
    friend int geta(const A &ca);
private:
    int a;
};

int geta(const A &ca)
{
    return ca.a;
}

int main()
{
    A a(3);
    cout << geta(a) << endl;

    return 0;
}
