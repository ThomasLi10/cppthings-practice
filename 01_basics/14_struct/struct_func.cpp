#include <iostream>
#include <stdio.h>

struct Base
{
    int v1;
    int v3;
public:
    int v2;
    void print()
    {
        printf("%s\n", "hello world");
    };

};

int main()
{
    struct Base base1;
    Base base2;
    Base base;
    base.v1 = 1;
    base.v3 = 2;
    base.print();
    printf("%d\n", base.v1);
    printf("%d\n", base.v3);

    return 0;
}
