/*
 * 交换两个数
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    swap(a, b);
    printf("%d %d\n", a, b);

    return 0;
}
