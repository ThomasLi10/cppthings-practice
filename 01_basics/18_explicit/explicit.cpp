#include <iostream>

using namespace std;

struct A
{
    A(int) {}
    operator bool() const { return true; }
};

struct B
{
    explicit B(int) {}
    explicit operator bool() const { return true; }
};

void doA(A a) {}
void doB(B b) {}

int main()
{
    A a1(1);
    A a2 = 1;
    A a3{1};
    A a4 = {1};
    A a5 = (A) 1;
    doA(1);
    if (a1);
    bool a6(a1);
    bool a7 = a1;
    bool a8 = static_cast<bool>(a1);

    B b1(1);
    B b3{1};
    B b5 = (B) 1;
    if (b1);
    bool b6(b1);
    bool b8 = static_cast<bool>(b1);

    return 0;
}
