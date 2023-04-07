#include <iostream>

class B
{
private:
    int i;
protected:
    int j;
public:
    int k;
};

class D : public B
{
public:
    void f()
    {
        //i = 1;
        j = 2;
        k = 3;
    }
};

int main()
{
    B b;
    //b.i = 1;
    //b.j = 2;
    b.k = 3;

    return 0;
}
