#include <iostream>

using namespace std;

template <class T> T Min(T a, T b) { return (a < b) ? a : b; }
template <typename T> T myMin(T a, T b) { return (a < b) ? a : b; }

int main()
{
    double a = 2, b = 3.4;
    float c = 2.3, d = 3.2;
    cout << Min<int>(2, 3) << endl;
    cout << Min(2, 3) << endl;
    cout << Min(a, b) << endl;
    cout << Min('a', 'b') << endl;
    cout << std::min(c, d) << endl;
    cout << myMin(c, d) << endl;
    cout << Min<int>(2000, '3') << endl;
}
