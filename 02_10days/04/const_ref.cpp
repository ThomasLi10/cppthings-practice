#include <iostream>

using namespace std;

class A
{
public:
    A(int i, int j)
    {
        x = i;
        y = j;
    }
private:
    int x, y;
};

void display(const double &r)
{
    cout << r << endl;
}

int main()
{
    double d(9.5);
    display(d);
    A const a(3, 4);

    return 0;
}
