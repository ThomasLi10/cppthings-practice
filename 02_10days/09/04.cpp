#include <iostream>
using namespace std;

void temperature(int t)
{
    if (t == 100)
        throw "沸点！";
    else if (t == 0)
        throw "冰点！";
    else
        cout << "temperature = " << t << endl;
}

int main()
{
    try
    {
        temperature(0);
        temperature(10);
        temperature(100);
    }
    catch (char const *s)
    {
        cout << s << endl;
    }
}
