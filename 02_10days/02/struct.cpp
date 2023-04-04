#include <iostream>

using namespace std;

struct student
{
    int age;
    char name[20];
    char gender;
};

int main()
{
    student s = {20, "Thomas", 'M'};
    cout << s.age << endl;
    cout << sizeof(s.age) << endl;
    cout << sizeof(s.name) << endl;
    cout << sizeof(s.gender) << endl;
    cout << sizeof(s) << endl;

    return 0;
}
