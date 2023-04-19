#include <iostream>
using namespace std;

int main()
{
    cout << "1--before try block..." << endl;
    try
    {
        cout << "2--Inside try block..." << endl;
        throw 10;
        cout << "3--After throw..." << endl;
    }
    catch (int i)
    {
        cout << "4--In catch block 1 ... errcode is " << i << endl;
    }
    catch (char *s)
    {
        cout << "5--In catch block 2 ... errcode is " << s << endl;
    }

    cout << "6--After catch..." << endl;
}
