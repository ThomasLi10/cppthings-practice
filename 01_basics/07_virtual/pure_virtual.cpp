#include <iostream>

using namespace std;

class A 
{
private:
    int a;
public:
    virtual void show() = 0;
};

int main()
{
    A *a1;
    A *a2 = new A();
}
