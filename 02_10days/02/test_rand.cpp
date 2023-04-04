#include <iostream>
#include <random>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    if (argc == 1)
        n = 10;
    else
        n = atoi(argv[1]);

    default_random_engine e;
    uniform_real_distribution<double> u(0,1);
    for (int i = 0; i < n; ++i)
        cout << u(e) << " ";
    cout << endl;
}


