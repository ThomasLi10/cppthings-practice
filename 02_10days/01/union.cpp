#include <iostream>
#include <stdio.h>

using namespace std;

union myunion
{
    struct
    {
        int x;
        int y;
        int z;
    } u;
    int i;
    long k;
} a;

int main(int argc, char const *argv[])
{
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    cout << a.k << endl;
    cout << a.i << endl;

    a.k = 0;
    printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z);

    a.i = 0;
    printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z);

    return 0;
}
