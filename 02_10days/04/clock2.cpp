/*
设计一个时钟类，能够记录时、分、秒，重载它的++运算符，每执行一次++运算，加时1秒，但要使计时过程能够自动进位。
*/

#include <stdio.h>

using namespace std;

class Time
{
public:
    Time(int hh, int mm, int ss): hh(hh), mm(mm), ss(ss) {}
    void operator()(int hh, int mm, int ss)
    {
        hh = hh;
        mm = mm;
        ss = ss;
    }
    Time operator++();
    Time operator++(int n);
    void show()
    {
        printf("%02d:%02d:%02d\n", hh, mm, ss);
    }

private:
    int hh;
    int mm;
    int ss;
};

Time Time::operator++()
{
    ++ss;
    if (ss == 60)
    {
        ss = 0;
        ++mm;
        if (mm == 60)
        {
            mm = 0;
            ++hh;
            if (hh == 24)
                hh = 0;
        }
    }
    return *this;
}

Time Time::operator++(int n)
{
    Time tmp = *this;
    ++(*this);
    return tmp;
}

int main()
{
    Time t(23, 59, 59);
    (t++).show();
    ++t;
    t.show();
}
