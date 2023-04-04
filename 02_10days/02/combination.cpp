/*
 * 计算组合数 C(n,k)
 * Formula1: C(n,k) = C(n-1,k-1) + C(n-1,k)     // MUCH FASTER!!
 * Formula2: C(n,k) = (n+1-k)/k * C(n,k-1)
 * 
 * Output:
 *     Formula1: C(30, 13) = 119759850. Time costs: 0.000001 seconds
 *     Formula2: C(30, 13) = 119759850. Time costs: 0.540308 seconds
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

unsigned int comb1(int n, int k)
{
    k = k > (n - k) ? n - k : k;
    if (k > 1)
        return comb1(n, k - 1) * (n + 1 - k) / k;
    else
        return n;
}

unsigned int comb2(int n, int k)
{
    k = k > (n - k) ? n - k : k;
    if (n == k || k == 0)
        return 1;
    else
        return comb2(n - 1, k - 1) + comb2(n - 1, k);
}

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);

    clock_t t1 = clock();
    unsigned int c1 = comb1(n, k);
    clock_t t2 = clock();
    unsigned int c2 = comb2(n, k);
    clock_t t3 = clock();

    double e1 = double(t2 - t1) / CLOCKS_PER_SEC;
    double e2 = double(t3 - t2) / CLOCKS_PER_SEC;

    printf("Formula1: C(%d, %d) = %d. Time costs: %.6f seconds\n", n, k, c1, e1);
    printf("Formula2: C(%d, %d) = %d. Time costs: %.6f seconds\n", n, k, c2, e2);

    return 0;
}
