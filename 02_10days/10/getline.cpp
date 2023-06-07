#include <iostream>
using namespace std;

int main()
{
    char e1[10];
    char f1;
    cin.getline(e1, 10, ',');
    cin.get(f1);
    cout << e1 << endl << f1 << endl;
}
