#include <iostream>
#include <cstring>

using namespace std;

template <class T> 
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

template <>
const char* Max<const char*> (const char *a, const char *b)
{
    return (strcmp(a, b) >= 0) ? a : b;
}

template <>
char* Max<char*> (char *a, char *b)
{
    return (strcmp(a, b) >= 0) ? a : b;
}

int main()
{
    char s1[] = "xyce", s2[] = "xbv";
    cout << Max(s1, s2) << endl;
}
