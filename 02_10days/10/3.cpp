#include <iostream>
using namespace std;

int main()
{
    char c;
    char a[50] = "This is a string...";
    cout << "use get() input char: ";
    while ((c = cin.get()) != '\n')
    {
        cout.put(c);
        cout.put('\n');
        cout.put('t').put('h').put('i').put('s').put('\n');
        cout.write(a, 12).put('\n');
        cout << "look" << "\t here!" << endl;
    }
}
