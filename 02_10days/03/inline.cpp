/*
 * 用内联函数inline计算圆的面积
 */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


inline double cal_area(double r)
{
    return M_PI * r * r;
}

int main()
{
    double r;
    cout << "Please enter value of radius (double): ";
    cin >> r;
    printf("Area = %.4f\n", cal_area(r));

    return 0;
}
