#include <iostream>
#include <stdio.h>

using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    Time(int h = 0, int m = 0, int s = 0) : hh(h), mm(m), ss(s) {}
    void operator() (int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    void ShowTime() { printf("%02d:%02d:%02d\n", hh, mm, ss); }
};

int main()
{
    Time t1(12, 10, 11);
    t1.ShowTime();
    t1.operator()(23, 20, 34);
    t1.ShowTime();
    t1(10, 10, 10);
    t1.ShowTime();
}
