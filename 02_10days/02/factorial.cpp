/*
 * 计算阶乘
 */

#include <iostream>
#include <stdio.h>

using namespace std;

unsigned long int fac(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fac(n - 1);
}

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    unsigned long int f = fac(n);

    printf("%d! = %d\n", n, f);

    return 0;

}
