#include <iostream>
using namespace std;

int main()
{
    cout << "1--before try block..." << endl;
    try
    {
        cout << "2--Inside try block..." << endl;
        throw 10.;
        //throw 10;
        cout << "3--After throw..." << endl;
    }
    catch (double i)
    {
        cout << "4--In catch block 1 ... an int type is " << i << endl;
    }

    cout << "6--After catch..." << endl;
}
