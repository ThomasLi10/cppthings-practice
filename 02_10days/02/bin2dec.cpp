/*
 * 将二进制转为十进制
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int b;
    int u = 0;
    int d = 0;

    cout << "Please enter a binary number: ";
    cin >> b;

    while (b > 0)
    {
        u = b % 10;
        d = d * 2 + u;
        b /= 10;
    }

    cout << d << endl;

    return 0;

}
