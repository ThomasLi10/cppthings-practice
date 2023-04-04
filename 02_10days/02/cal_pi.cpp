/*
 * Formula 1 (John Machin):
 *   pi = 16 * arctan(1/5) - 4 * arctan(1/239)
 *   where,
 *   arctan(x) = x - x**3/3 + x**5/5 - x**7/7 + ...
 * Formula 2 (Leibniz):
 *   pi = 4 * (1/1 - 1/3 + 1/5 -1/7 + ...)
 */

#include <stdio.h>
#include <iostream>

using namespace std;

double arctan(double x)
{
    double s = 1, n = x, d = 1;
    double at = 0;
    while (n / d > 1e-25)
    {
        at += s * n / d;
        s *= -1;
        n *= x * x;
        d += 2;
    }
    return at;
}

double Leibniz()
{
    double s = 1, d = 1;
    double pi = 0;
    while (d < 200000)
    {
        pi += s / d;
        s *= -1;
        d += 2;
    }
    return pi * 4;
}

int main()
{
    double pi1 = 16 * arctan(0.2) - 4 * arctan(1.0/239.0);
    double pi2 = Leibniz();

    double real_pi = 3.1415926535897932384626433;

    printf("Calc pi1 = %.20f\n", pi1);
    printf("Calc pi2 = %.20f\n", pi2);
    printf("Real pi  = %.20f\n", real_pi);
}
