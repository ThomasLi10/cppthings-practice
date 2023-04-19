#include <iostream>
using namespace std;

void Errhandler(int n)
{
    try
    {
        if (n == 1)
            throw n;
        cout << "all is OK..." << endl;
    }
    catch (int n)
    {
        cout << "catch an int exception inside..." << n << endl;
        throw n;
    }
}

int main()
{
    try
    {
        Errhandler(1);
    }
    catch (int x)
    {
        cout << "catch an int exception inside..." << x << endl;
    }
    cout << "...End..." << endl;
}
