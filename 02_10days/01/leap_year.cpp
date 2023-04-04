/*
 * 判断输入年份是否为闰年。
 */

#include <iostream>

using namespace std;

void ask_once(int year)
{
    if ( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        cout << year << " is a Leap Year." << endl;
    else
        cout << year << " is not a Leap Year." << endl;
}

int main(int argc, char const *argv[])
{
    int year;

    if (argc == 1 || string(argv[1]) == "once")
    {
        cout << "Plear enter a year: ";
        cin >> year;
        ask_once(year);
    }
    else if (string(argv[1]) == "loop")
    {
        cout << "Plear enter a year: ";
        while (cin >> year)
        {
            ask_once(year);
            cout << "Plear enter a year: ";
        }
    }
    return 0;

}

