/*
利用 operator() 展示时钟时间
 */

#include <stdio.h>

using namespace std;

class Time
{
public:
    Time(int hh, int mm, int ss): hh(hh), mm(mm), ss(ss) {}
    void operator()(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    void show()
    {
        printf("%02d:%02d:%02d\n", hh, mm, ss);
    }
private:
    int hh, mm, ss;
};

int main()
{
    Time t1(12, 12, 12);
    t1.show();
    t1(11, 11, 11);
    t1.show();

    return 0;
}
