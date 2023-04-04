#include <iostream>
using namespace std;

void (*pFun)(int);

typedef void (*func)(void);

void myfunc(void)
{
    cout << "myfun called" << endl;
}

void glFun(int a)
{
    cout << a << endl;
}

int main()
{
    func pfun = myfunc;
    pfun();

    pFun = glFun;
    (*pFun)(2);

    return 0;
    
}
