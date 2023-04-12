#include <iostream>
#include <stdio.h>

using namespace std;

class X
{
public:
    int operator()(int i = 0)
    {
        printf("X::operator(%d)\n", i);
        return i;
    }
    int operator()(int i, int j)
    {
        printf("X::operator(%d, %d)\n", i, j);
        return i;
    }

    int operator[](int i)
    {
        printf("X::operator[%d]\n", i);
        return i;
    }
    int operator[](const char *cp)
    {
        printf("X::operator[\"%s\"]\n", cp);
        return 0;
    }
};

int main()
{
    X obj;
    int i = obj(obj(1), 2);
    int a = obj[i];
    int b = obj["abcd"];
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
