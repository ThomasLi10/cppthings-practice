#include <iostream>
#include <stdio.h>

using namespace std;

class Counter
{
private:
    int n;
public:
    Counter(int i = 0) : n(i) {};
    Counter operator++();
    Counter operator++(int);
    friend Counter operator--(Counter &c);
    friend Counter operator--(Counter &c, int);
    void display();
};

Counter Counter::operator++()
{
    ++n;
    return *this;
}

Counter Counter::operator++(int)
{
    Counter t = *this;
    n++;
    return t;
}

Counter operator--(Counter &c)
{
    --c.n;
    return c;
}

Counter operator--(Counter &c, int)
{
    Counter t(c.n);
    c.n--;
    return t;
}

void Counter::display()
{
    cout << "Counter number = " << n << endl;
}

int main(int argc, char const *argv[])
{
    Counter a;
    ++a;
    a.display();
    a++;
    a.display();
    a--;
    a.display();
    --a;
    a.display();
}
