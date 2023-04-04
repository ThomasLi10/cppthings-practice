#include <stdio.h>
#include <random>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = argc == 1? 100 : atoi(argv[1]);

    default_random_engine e;
    uniform_real_distribution<double> u(0, 1);

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        double x = u(e), y = u(e);
        if (x * x + y * y <= 1)
            ++cnt;
    }
    double pi = double(cnt) / double(n) * 4;

    printf("Pi = %.4f\n", pi);

}
