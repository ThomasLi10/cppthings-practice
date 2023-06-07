#include <iostream>
using namespace std;

int main()
{
    char stu[5][10];
    for (int i = 0; i < 5; i++)
        cin.getline(stu[i], 10, ',');
    for (int i = 0; i < 5; i++)
        cout << stu[i] << endl;


}
